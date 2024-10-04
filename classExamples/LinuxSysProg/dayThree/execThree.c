/*
 *	intro to Process
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(){
	pid_t ret;

	ret = fork();
	if(ret == 0){
		char *args[] = {"/bin/ls" , "/", NULL};
		sleep(.1);
		execv(args[0], args);
	}else if (ret == -1){
		perror("fork");
		exit(1);
	}else {
		int ret;
		printf("Before Executing \n");
		wait(&ret); 
		printf("After Executing \n");
		exit(0);
	}
}

