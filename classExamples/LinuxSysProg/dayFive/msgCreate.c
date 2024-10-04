#include <sys/msg.h>
#include <sys/ipc.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
	int key = 0x1234;
	int id = msgget(key, IPC_CREAT|IPC_EXCL | 0644) ;
	if (id == -1){
		perror("msgget");
		exit(1);
	}
	printf("Msg Queue created successfull for %x with %d\n", key, id);
	
}
