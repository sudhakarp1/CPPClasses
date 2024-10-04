#include <fcntl.h>
#include <mqueue.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
	struct mq_attr var = {0, 10, 256, 0};
	const char *name = "/whatever";
	printf("Trying to create a message Queue...\n");
	int mqDes = mq_open(name, O_CREAT | O_EXCL | O_RDWR, 0644, &var);

	if (mqDes == -1){
		perror("mq_open");
		_exit(1);
	}
	printf("Message Queue created successfully...\n");
}

