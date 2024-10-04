#include <stdio.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <unistd.h>

int main(){
	int id, res, cnt;
	char *ptr;
	id = shmget(0x12345, 27, 0644|IPC_CREAT|IPC_EXCL);
	if (id == -1){
		perror("shmget");
		_exit(1);
	}	
	ptr = shmat(id,0,0);
	if(ptr == NULL){
		perror("shmat");
		_exit(2);
	}
	for(cnt=0;cnt<26;cnt++)
		ptr[cnt] = 'A' + cnt;
	ptr[cnt] = '\0'; 

/*	while (ptr[cnt] != '*')
		;
*/
}
