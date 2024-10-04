#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

#define NUMTHREADS 3

typedef struct {
	int num;
	int val;
}JobInfo;

void *doJob(void *arg){
	JobInfo var = *(JobInfo *)arg; //at the time of assignment
	printf("**************  In doJob(%d) ***********\n", var.num);
	sleep(var.val);
	printf("----------------%d--------------------\n", var.num);
	return arg;
}
int main(){ //main thread
	pthread_t tid[NUMTHREADS];
	int arr[NUMTHREADS];
	JobInfo dataArr[NUMTHREADS] = {{1,3},{2,2},{3,1}};

	for(int cnt=0;cnt < NUMTHREADS; cnt++)
		pthread_create(&tid[cnt], NULL,doJob, &dataArr[cnt]);

	for(int cnt=0;cnt < NUMTHREADS; cnt++)
		pthread_join(tid[cnt],NULL);
}
