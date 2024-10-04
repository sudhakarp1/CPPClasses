#include <stdio.h>
#include <unistd.h>
int main(){
	char *args[] = {"/bin/ls" ,"-l", "-r" ,"-t" , "/", NULL};
	printf("Hello welcome to Linux System programming...\n");
	execv(args[0], args);
   	printf("This rarely 	executes");
}
