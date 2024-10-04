#include <sys/ipc.h>
#include <sys/sem.h>
#include <unistd.h>
#include <stdio.h>

int main(){
	int res, id;
	struct sembuf buff= {0,1,IPC_NOWAIT|SEM_UNDO};

	id = semget(0x12345, 1, 0644|IPC_CREAT);

	if(id == -1){
		perror("semget");
		_exit(1);
	}

	printf("Aquiring the resource....\n");
	res = semop(id, &buff,1);

	if(res == -1){
		perror("semop");
		_exit(2);
	}
	printf("Aquired the resource....\n");
	sleep(2);

	buff.sem_op = -1;

	printf("Releasing the resource...\n");
	res = semop(id, &buff,1);

	if(res == -1){
		perror("semop");
		_exit(3);
	}
	printf("the resource.Released ..\n");
	
}
