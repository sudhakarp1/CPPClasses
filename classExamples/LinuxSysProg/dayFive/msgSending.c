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
	struct msgBuffer arr[] ={ {11, "Message # 11 here"}, {101, "Message # 101 here"},{110, "Message # 110 here"}}; 
	int id = msgget(key, 0644) ;
	if (id == -1){
		perror("msgget");
		exit(1);
	}
	printf("Msg Queue Accessed successfull for %x with %d\n", key, id);
	int cnt, ret;
	for(cnt =0 ; cnt < 3; ++cnt){
		ret = msgsnd(id, arr + cnt, sizeof(struct msgBuffer), 0)	;
		if (ret == -1 ){
			perror("msgsnd");
			exit(2);
		}else
			printf("Msg : %ld sent \n", arr[cnt].mType);
	}

	
}
