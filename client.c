/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * main.c
 * Copyright (C) 2019 
 * 
 * tcp_client is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * tcp_client is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "unp.h"
/*
void str_cli(FILE* fp,int sockfd){
	char sendline[MAXLINE],receiveline[MAXLINE];
	while(Fgets(sendline,MAXLINE,fp)!=NULL){
		Writen(sockfd,sendline,1);
		sleep(1);
		Writen(sockfd,sendline+1,strlen(sendline)-1);
		if(Readline(sockfd,receiveline,MAXLINE)==0)
			err_quit("str_cli:test");
		Fputs(receiveline,stdout);
	}
}
*/
/*
void str_cli(FILE *fp,int sockfd){
	int maxfdp1;
	fd_set rset;
	char sendline[MAXLINE],recvline[MAXLINE];

	FD_ZERO(&rset);
	for(;;){
		FD_SET(fileno(fp),&rset);
		FD_SET(sockfd,&rset);
		maxfdp1=max(fileno(fp),sockfd)+1;
		Select(maxfdp1,&rset,NULL,NULL,NULL);

		if(FD_ISSET(sockfd,&rset))  //socket is readable
		{
			if(Readline(sockfd,recvline,MAXLINE)==0){
				err_quit("str_cli:server terminated");
			}
			Fputs(recvline,stdout);
		}
		if(FD_ISSET(fileno(fp),&rset))  //standard input stream is readable
		{
			if(Fgets(sendline,MAXLINE,fp)==NULL){
				return;   //all done
			}
			Writen(sockfd,sendline,strlen(sendline));
		}
	}
}
*/
//version 3
void str_cli(FILE *fp,int sockfd)
{
	int maxfdp1,stdineof;    //used to mark distant EOF
	fd_set rset;
	char buf[MAXLINE];      //change to buffer rather than line buf
	int n;

	stdineof=0;
	FD_ZERO(&rset);
	for(;;){
		if(stdineof==0)
			FD_SET(fileno(fp),&rset);
		FD_SET(sockfd,&rset);
		maxfdp1=max(fileno(fp),sockfd)+1;
		Select(maxfdp1,&rset,NULL,NULL,NULL);

		if(FD_ISSET(sockfd,&rset)){
			if((n=Read(sockfd,buf,MAXLINE))==0){
				if(stdineof==1)
					return;  //normal termination
				else
					err_quit("str_cli:server terminated prematirely");
			}
			Write(fileno(fp),buf,n);	
		}

		if(FD_ISSET(fileno(fp),&rset)){
			if((n=Read(fileno(fp),buf,MAXLINE))==0){
				stdineof=1;
				Shutdown(sockfd,SHUT_WR); //send FIN
				FD_CLR(fileno(fp),&rset);
				continue;
			}
			Writen(sockfd,buf,n);
		}
	}
}


int main(int argc,char** argv)
{
	int sockfd;
	struct sockaddr_in serveraddr;

	if(argc!=2)
		err_quit("usage: tcp_client <IPaddress>");
	sockfd=Socket(AF_INET,SOCK_STREAM,0);
	memset(&serveraddr,0,sizeof(serveraddr));
	serveraddr.sin_family=AF_INET;
	serveraddr.sin_port=htons(8080);
	Inet_pton(AF_INET,argv[1],&serveraddr.sin_addr);

	Connect(sockfd,(struct sockaddr*)&serveraddr,sizeof(serveraddr));

	//test



	str_cli(stdin,sockfd);

    return 0;
}
