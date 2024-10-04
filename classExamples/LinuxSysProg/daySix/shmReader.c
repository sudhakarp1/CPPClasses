#include <fcntl.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/mman.h>

void errorHandler(int, const char *);
int main(){
	int fd = shm_open("/mySHMObj", O_RDONLY, 0644);
	errorHandler(fd, "shm_open");

	char *addr = mmap(0, 53, PROT_READ, MAP_SHARED, fd, 0);
	if (addr == MAP_FAILED)
		errorHandler(-1, "mmap");
	char myStr[55];
	//strncpy(myStr, addr, 52);
	//myStr[52]=0;

	printf("Read: %s\n", addr);
	int ret = munmap(addr, 53);
	errorHandler(ret, "munmap");
}
void errorHandler(int ret, const char *mesg){
	if(ret == -1){
		perror(mesg);
		exit(EXIT_FAILURE);
	}
}
