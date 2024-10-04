#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void doJob(){
	printf("**************  In doJob() ***********\n");
	sleep(1);
	printf("----------------------------------------\n");
}

int main(){
	doJob();
	doJob();
	doJob();
}

