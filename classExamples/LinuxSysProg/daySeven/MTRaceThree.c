#include <pthread.h>
#include <semaphore.h>
#include <stdio.h>
#include <unistd.h>

#define MAX 100000
int glob; 

sem_t semLock;

void *doJob(void *arg){ 
	for(int cnt=0;cnt < MAX; cnt++){
		sem_wait(&semLock); // 
		glob ++;
		sem_post(&semLock); // 
	}
	return arg;
}

int main(){ 
	pthread_t tid;
	sem_init(&semLock, 0,1);
	pthread_create(&tid, NULL,doJob, NULL);
	
	for(int cnt=0;cnt < MAX; cnt++){
		sem_wait(&semLock); // 
		glob ++;
		sem_post(&semLock); // 
	}

	pthread_join(tid,NULL);
	
	sem_destroy(&semLock);
	printf("At the end ... glob = %d\n", glob);
}
