#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void *doJob(void *arg){
	printf("**************  In doJob() ***********\n");
	sleep(1);
	printf("----------------------------------------\n");
	return arg;
}

int main(){
	pthread_t t1, t2,t3; 
	pthread_create(&t1,NULL, doJob, NULL);
	pthread_create(&t2,NULL, doJob, NULL);
	pthread_create(&t3,NULL, doJob, NULL);

	pthread_join(t1, NULL);
	pthread_join(t2, NULL);
	pthread_join(t3, NULL);
}

