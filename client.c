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
