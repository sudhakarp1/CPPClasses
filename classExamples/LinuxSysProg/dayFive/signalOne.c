#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

void myFun(int sig){
	
	if (sig == SIGTSTP)
		printf("You have pressed Ctr+Z\n");

	if (sig == SIGINT){
		printf("You have pressed Ctr+C\n");
		exit(2);
	}
}

int main(){
	signal(2, myFun);
	signal(SIGTSTP, myFun);

	while (1)
		;
}
