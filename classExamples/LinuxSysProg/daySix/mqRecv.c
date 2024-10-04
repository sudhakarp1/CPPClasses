/*
 * Usage of mq_open(3) 
 *
 *
 */

#include <fcntl.h>
#include <sys/types.h>
#include <mqueue.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(){
	struct mq_attr attr = {0, 10,256, 0};
	int oFlags = O_RDWR ;
	char *name = "/mqNameHere";
	printf("Opening the message Queue: \n");
	int mqDes = mq_open(name, oFlags, 0644,&attr);

	if(mqDes == -1){
		perror("mq_open");
		exit(EXIT_FAILURE);
	}
	char message[20];
	unsigned int priority;

	int ret = mq_getattr(mqDes, &attr);

	if(ret == -1){
		perror("mq_getattr");
		exit(EXIT_FAILURE);
	}
	printf("Maximum No of Mesgs: %d\n", attr.mq_maxmsg);
	printf("Maximum Mesg size: %d\n", attr.mq_msgsize);
	printf("No of Mesgs in the queue: %d\n", attr.mq_curmsgs);

	for (int cnt=0;cnt < attr.mq_curmsgs; cnt++){
		int numBytes = mq_receive(mqDes, message, attr.mq_msgsize, &priority);
		message[numBytes] = 0;
		printf("Message:  %s \t\t Priority: %u\n", message, priority);
	}

		
	printf("Deleleting the message Queue...\n");
	mqDes = mq_unlink(name);

	if(mqDes == -1){
		perror("mq_unlink");
		exit(EXIT_FAILURE);
	}

	exit(EXIT_SUCCESS);
}

