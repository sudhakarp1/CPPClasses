#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(){
	int	fd1 = open("newfile.c", O_WRONLY|O_CREAT|O_TRUNC, 0644);
	printf("Before duplicating ....\n");
	dup2(fd1, 1);
	printf("after duplicating ....\n");
	printf("Adding some things here...\n");


}
