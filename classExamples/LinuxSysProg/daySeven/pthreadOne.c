#include <stdio.h>
#include <pthread.h>

void* myFun(void *);

int main(){
	pthread_t tid;
	int ret = pthread_create(&tid, NULL, myFun, NULL);
	while (1)
		printf("X");
}


void* myFun(void *var){

	while (1)
		printf("O");
	return var;
}
