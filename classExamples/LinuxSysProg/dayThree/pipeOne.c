#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int main(){
	int fds[2];
	char str[20];

	int ret = pipe(fds);
	if (ret == -1){
		perror("Pipe error");
		exit(1);
	}	

	write(fds[1], "Hello World!...\n", 18);
	ret = read(fds[0], str, 18);

	printf("Read %d byts int str : %s\n", ret, str); 

}
