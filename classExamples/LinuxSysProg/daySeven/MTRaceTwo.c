#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

#define MAX 100000
int glob; 

pthread_mutex_t mutexLock;

void *doJob(void *arg){ 
	for(int cnt=0;cnt < MAX; cnt++){
		pthread_mutex_lock(&mutexLock); // 
		glob ++;
		pthread_mutex_unlock(&mutexLock);//
	}
	return arg;
}

int main(){ 
	pthread_t tid;
	pthread_mutex_init(&mutexLock, NULL);

	pthread_create(&tid, NULL,doJob, NULL);//thread 1

	for(int cnt=0;cnt < MAX; cnt++){
		pthread_mutex_lock(&mutexLock);//
		glob ++;
		pthread_mutex_unlock(&mutexLock);//
	}

	pthread_join(tid,NULL);//main thread waits for the termination of thread tid
	
	pthread_mutex_destroy(&mutexLock);
	printf("At the end ... glob = %d\n", glob);
}

