/*
 *
 *
 *
 *
 */
#define _GNU_SOURCE

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <signal.h>

#define NSIGS 31

void printSigStatus(sigset_t *ptr);

int main(){
	sigset_t values;
	sigemptyset(&values);//set is filled with empty / off state
	
	printSigStatus(&values); //my function

	sigfillset(&values); // set is filled with on state
	printSigStatus(&values);

	sigdelset(&values, 2); //switching off SIGINT
	sigdelset(&values, 3); //off SIGQUIT
	sigdelset(&values, 20); //off SIGTSTP

	printSigStatus(&values);
}
void printSigStatus(sigset_t *ptr){
	printf("Status of set: ");
	for(int cnt=1; cnt<=NSIGS; cnt++){
		if(sigismember(ptr, cnt))
			printf("%d ---> ON\t", cnt);
		else
			printf("%d ---> OFF\t", cnt);
	}	
	printf("\n----------------------------------------------\n");
}

