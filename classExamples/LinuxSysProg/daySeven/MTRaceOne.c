#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

#define MAX 100000
int glob; 

void *doJob(void *arg){ 
	for(int cnt=0;cnt < MAX; cnt++)
		glob ++;
	return arg;
}

int main(){ 
	pthread_t tid;
	pthread_create(&tid, NULL,doJob, NULL);

	for(int cnt=0;cnt < MAX; cnt++)
		glob ++;
	
	pthread_join(tid,NULL);

	printf("At the end ... glob = %d\n", glob);
}

