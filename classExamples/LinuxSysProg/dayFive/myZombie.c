#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>

int main(){
	pid_t pid;

	pid = fork();
	if(pid == -1){
		perror("fork");
		exit(1);
	}else if (pid == 0){
		printf("Child ...%d\n",getpid());
		_exit(1);//child terminated while 
	}else{
		sleep(5);//parent is sleeping
		printf("Parent...%d\n",getpid());
		int ret;
		ret = execlp("ps", "ps", "a", NULL);
		exit(errno);
	}
}
