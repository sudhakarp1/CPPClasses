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
	pid_t pid;
	int fds[2];

	int ret = pipe(fds);
	if (ret == -1){
		perror("Pipe error");
		exit(1);
	}	
	pid = fork();
	if(pid == 0){
		printf("Child writing ...\n");
		write(fds[1], "Hello World!...\n", 18);
		exit(0);
	}else if (pid == -1){
		perror("fork");
		exit(1);
	}else {
		int ret;
		char str[20];
		wait(&ret); 
		ret = read(fds[0], str, 18);
		printf("Parent Read %d byts int str : %s\n", ret, str); 
		exit(0);
	}
}

