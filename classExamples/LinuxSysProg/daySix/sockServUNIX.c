#include <sys/socket.h>
#include <sys/un.h>
#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <string.h>

#define SOCKPATH "mySocketFile"

void errorHandler(int ret, const char *mesg);
void signalHandler(int sig);
int cond = 1;
int main(){
	int sd, csd;
	struct sockaddr_un myAddr;
	signal(2, signalHandler);	
	
	sd = socket(AF_UNIX, SOCK_STREAM, 0);//1
	errorHandler(sd,"socket");

	memset(&myAddr, 0 , sizeof(struct sockaddr_un));
	myAddr.sun_family = AF_UNIX;
	strcpy(myAddr.sun_path,SOCKPATH);

	int ret = bind(sd,(struct sockaddr *) &myAddr, sizeof(struct sockaddr_un)); //2
	errorHandler(ret, "bind");

	ret = listen(sd, 5); //3
	errorHandler(ret, "listen");
	int numBytes ;
	char buff[100];
	char mesg[150];

	while (cond){ //servicing client requests...
		csd = accept(sd,NULL, NULL); //4
	   	errorHandler(csd, "accept");
		printf("Accepted Connection :\n"); 
		while ((numBytes = recv(csd, buff, 100,0) ) > 0){ //5
			buff[numBytes] = 0;
			printf("Recvd: %s\n", buff);
			sprintf(mesg,"server Returning --> %s\n", buff);
			ret = send(csd, mesg, strlen(mesg), 0); //6
			errorHandler(ret, "send");		
		}

		errorHandler(numBytes, "recv");
		ret = close(csd); //7
		errorHandler(ret, "close");			
	
	}
	close(sd);
	return EXIT_SUCCESS;
}
void signalHandler(int sig){
	if(sig == 2){
		printf("Signal 2 recieved...\n");
		int ret = unlink(SOCKPATH);
		_exit(sig);	
	}
}
void errorHandler(int ret, const char *mesg){
	if(ret == -1){
		perror(mesg);
		exit(EXIT_FAILURE);
	}
}

