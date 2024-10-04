#include <stdio.h>
#include <unistd.h>
int main(){
	printf("Hello welcome to Linux System programming...\n");
	execl("/bin/ls","/bin/ls" ,"-l", "-r" ,"-t" , "/", NULL);
   	printf("This rarely 	executes");
}
