#include <unistd.h>
#include <fcntl.h>

int main(){
	int fd = open("syscallThree.c", O_RDONLY);
	char ch;
	int n ;
	while ((n = read(fd, &ch, 1))>0)
		write(1, &ch, 1);

	close(fd);
}
