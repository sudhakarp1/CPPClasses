#include <fcntl.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/mman.h>

void errorHandler(int, const char *);
int main(){
	int fd = shm_open("/mySHMObj", O_CREAT|O_EXCL|O_RDWR, 0644);
	errorHandler(fd, "shm_open");

	int ret = ftruncate(fd, 53);

	char *addr = mmap(0, 53, PROT_READ|PROT_WRITE, MAP_SHARED, fd, 0);
	if (addr == MAP_FAILED)
		errorHandler(-1, "mmap");
	
	strcpy(addr, "ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	strcat(addr,"abcdefghijklmnopqrstuvwxyz"); 

	ret = munmap(addr, 53);
	errorHandler(ret, "munmap");
}
void errorHandler(int ret, const char *mesg){
	if(ret == -1){
		perror(mesg);
		exit(EXIT_FAILURE);
	}
}
