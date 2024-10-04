/*
 *
 *
 *
 */

#include <sys/socket.h>
#include <sys/un.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

#define SOCKPATH "mySocketFile"

void errorHandler(int ret, const char *mesg);

int main(int argc, char *argv[]){
	int numMessages = 5;

	if(argc == 2)
		numMessages = atoi(argv[1]);

	int sd, csd;
	struct sockaddr_un myAddr;

	sd = socket(AF_UNIX, SOCK_STREAM, 0);//1
	errorHandler(sd,"socket");

	memset(&myAddr, 0 , sizeof(struct sockaddr_un));
	myAddr.sun_family = AF_UNIX;
	strcpy(myAddr.sun_path,SOCKPATH);

	int ret;
	ret = connect(sd, (struct sockaddr*)&myAddr, sizeof(struct sockaddr_un));//2
	errorHandler(ret, "connect");

	int numBytes ;
	char message[50] = "This is from Client";
	char buff[150];

	for(int cnt =0 ;cnt< numMessages;cnt++){
		sprintf(buff, "%s ---> %d\n", message, cnt+1);
		ret = send(sd, buff, strlen(buff), 0); //3

		numBytes = recv(sd, buff, 150, 0); //4
		errorHandler(numBytes, "recv");

		if (numBytes > 0){
			buff[numBytes] =0;
			printf("Recieved From Server:  %s\n", buff);
		}
	
	}

	ret = close(sd); //5
	errorHandler(ret, "close");			
	
	return EXIT_SUCCESS;
}


void errorHandler(int ret, const char *mesg){
	if(ret == -1){
		perror(mesg);
		exit(EXIT_FAILURE);
	}
}

