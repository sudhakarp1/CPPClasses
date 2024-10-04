#include <stdio.h>
#include <pthread.h>

void* myFun(void *);

int main(){
	pthread_t tid;
	int ret = pthread_create(&tid, NULL, myFun, NULL);
	for(int cnt = 0; cnt < 100; ++cnt)
		printf("X");
	pthread_join(tid, NULL);
}


void* myFun(void *var){
	for(int cnt = 0; cnt < 100; ++cnt)
		printf("O");
	return var;
}
