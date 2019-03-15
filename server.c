
#include "unp.h"
/*
ssize_t readn(int fd,void* buf,size_t n){
	size_t nleft;
	ssize_t nread;
	char* ptr;

	ptr=buf;
	nleft=n;
	while(nleft>0){
		if((nread=read(fd,ptr,nleft))<0){
			if(errno==EINTR)
				nread=0;  //read again
			else
				return -1;//fail
		}else if(nread==0)
			break;  //read an EOF
		nleft-=nread;
		ptr+=nread;
	}
	return n-nleft;
}
*/


void str_echo(int socketfd){
	ssize_t n;
	char buf[MAXLINE];

again:
	while((n=read(socketfd,buf,MAXLINE))>0){
		Writen(socketfd,buf,n);

	}
	if(n<0 && errno==EINTR)
		goto again;
	else if(n<0)
		err_sys("stre_cho:read error");
}


void sig_chld(int signo){
	pid_t pid;
	int stat;
	//不用wait 的原因是对于信号是不排队的，因此这个函数被调用事可能有多个子进程僵死
	//pid=Wait(&stat);
	while((pid=waitpid(-1,&stat,WNOHANG))>0){
		printf("child %d terminated\n",pid);
	}

	return;
}

int main()
{
    pid_t pid;
    int listenfd,connfd;
    struct sockaddr_in sock;
    sock.sin_family=AF_INET;
    sock.sin_addr.s_addr=htonl(INADDR_ANY);
    sock.sin_port=htons(8080);
    int len=sizeof(sock);
    int clen;
    struct sockaddr_in clisock;
    //略去错误处理了
    listenfd=socket(AF_INET,SOCK_STREAM,0);
    if(listenfd<0){
		perror("socket");
		exit(1);
    }
    if(bind(listenfd,(struct sockaddr*)&sock,len)<0){
		perror("bind");
		exit(2);
    }

    listen(listenfd,5);

    //处理僵死进程
    if(Signal(SIGCHLD,sig_chld)==SIG_ERR){
		perror("Signal");
		exit(3);
    }

	printf("server is running on port.... %d\n",8080);
	printf("accepting request from %s....\n","*.*.*.*");

    for(;;){
		clen=sizeof(clisock);
		//处理被中断的accept调用
		connfd=accept(listenfd,(struct sockaddr*)&clisock,(socklen_t*)&clen);
		if(connfd<0){
			if(errno==EINTR)
				continue;
			else
				err_sys("accept");
		}

		if((pid=fork())==0){
			Close(listenfd);
			//do ti here
			//printf("<%d>a connect comes\n",(int)getpid());
			printf("child process %d created\n",getpid());
			str_echo(connfd);
			exit(0);
		}
		Close(connfd);
    }
    return 0;
}
