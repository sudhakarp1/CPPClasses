/*
*	Simple Intro to Multi-thread using pthread 
 *  Passing argument to threads
 *
 */

#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

#define NUMTHREADS 3

void *doJob(void *arg){
	int var = *(int *)arg; //at the time of assignment
	printf("**************  In doJob(%d) ***********\n", var);
	sleep(1);
	printf("----------------%d--------------------\n", var);
	return arg;
}

int main(){ //main thread
	pthread_t tid[NUMTHREADS];
	int arr[NUMTHREADS];

	for(int cnt=0;cnt < NUMTHREADS; cnt++)
			arr[cnt] = (cnt + 1)*10;

	for(int cnt=0;cnt < NUMTHREADS; cnt++)
		pthread_create(&tid[cnt], NULL,doJob, &arr[cnt]);

	for(int cnt=0;cnt < NUMTHREADS; cnt++)
		pthread_join(tid[cnt],NULL);
	
}

