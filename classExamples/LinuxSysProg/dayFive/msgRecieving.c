#include <sys/msg.h>
#include <sys/ipc.h>
#include <stdio.h>
#include <stdlib.h>

struct msgBuffer{
	long mType;
	char mesg[50];
};

int main(){
	int key = 0x1234;
	struct msgBuffer var;
	int id = msgget(key, 0644) ;
	if (id == -1){
		perror("msgget");
		exit(1);
	}
	printf("Msg Queue Accessed successfull for %x with %d\n", key, id);
	int cnt, ret;
	for(cnt =0 ; cnt < 3; ++cnt){
		ret = msgrcv(id, &var, sizeof(var), 0/*mTypoe*/, 0);
		if (ret == -1 ){
			perror("msgrcv");
			exit(2);
		}else
			printf("Msg : %ld With: %s \n", var.mType, var.mesg);
	}

	
}
