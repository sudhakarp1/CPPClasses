#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

#define NUMTHREADS 30

void *doJob(void *arg){
	printf("**************  In doJob() ***********\n");
	sleep(1);
	printf("----------------------------------------\n");
	return arg;
}

int main(){ //main thread
	pthread_t tid[NUMTHREADS];

	for(int cnt=0;cnt < NUMTHREADS; cnt++)
		pthread_create(&tid[cnt], NULL,doJob, NULL);//thread 1

	for(int cnt=0;cnt < NUMTHREADS; cnt++)
		pthread_join(tid[cnt],NULL);//main thread waits for the termination of thread tid[0]
	
}

