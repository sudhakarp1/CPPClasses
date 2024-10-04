#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


void myFun(int sig){
	printf("in myFun... %d\n", sig);
	exit(sig);
}

int main(){
	struct sigaction actionNew, actionOld;

	actionNew.sa_handler = myFun;
	sigemptyset(&actionNew.sa_mask); //all the signals are off
	actionNew.sa_flags = 0;

	sigaction(SIGINT, NULL, &actionOld);
	if(actionOld.sa_handler == SIG_DFL) // if default setting then overwrite 
		sigaction(SIGINT, &actionNew, NULL);

	while (1)
		;
}

