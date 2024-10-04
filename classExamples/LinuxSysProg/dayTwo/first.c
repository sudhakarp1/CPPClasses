#include <stdio.h>
#include <unistd.h>
int main(){
	fork();
	printf("pid: %d\t\tppid: %d  \n",getpid(), getppid());
}
