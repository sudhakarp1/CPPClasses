#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

int glob; //uninitialized ---> BSS --> 0

void *doJob(void *arg){
	printf("**************  In doJob() ***********\n");
	glob+=10;
	printf("----------------------------------------\n");
	return arg;
}

int main(){ 
	pthread_t tid;

	pthread_create(&tid, NULL,doJob, NULL);
	glob+=10;
	pthread_join(tid,NULL);

	printf("At the end ... glob = %d\n", glob);
}

