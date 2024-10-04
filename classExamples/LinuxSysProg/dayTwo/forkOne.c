#include <stdio.h>
#include <unistd.h>
int main(){
	int pid =fork();
	if (pid == 0)
		printf("Hello From Child %d...\n",getpid());
	else if (pid > 0)
		printf("Hello From Parent %d...\n",getpid());
	else
		perror("fork failed: ");
}
