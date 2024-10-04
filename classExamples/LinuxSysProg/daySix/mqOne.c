/*
 * Usage of mq_open(3)  used as a creator and writer
 *
 *
 */

#include <fcntl.h>
#include <sys/types.h>
#include <mqueue.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdio.h>

int main(){
	srand(time(NULL));

	struct mq_attr attr = {0, 10,256, 0};
	int oFlags = O_CREAT|O_EXCL|O_RDWR ;
	char *name = "/mqNameHere";
	printf("Creating the message Queue: \n");
	int mqDes = mq_open(name, oFlags, 0644,&attr);

	if(mqDes == -1){
		perror("mq_open");
		exit(EXIT_FAILURE);
	}
	char str[] = "Message Here";
	char message[20];
	int priority;

	for (int cnt=0;cnt < 10; cnt++){
		sprintf(message, "%s---> %d",str, cnt+1);
		priority = rand() %100;
		printf("Message:  %s \t\t Priority: %d\n", message, priority);
		mq_send(mqDes, message, strlen(message), priority);
	}

	int ret = mq_getattr(mqDes, &attr);

	if(ret == -1){
		perror("mq_getattr");
		exit(EXIT_FAILURE);
	}

	printf("Maximum No of Mesgs: %d\n", attr.mq_maxmsg);
	printf("Maximum Mesg size: %d\n", attr.mq_msgsize);
	printf("No of Mesgs in the queue: %d\n", attr.mq_curmsgs);

	exit(EXIT_SUCCESS);
}

