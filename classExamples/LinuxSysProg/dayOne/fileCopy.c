#include <unistd.h>
#include <fcntl.h>

int main(int argc, char *argv[]){
	int fd1, fd2;
	if (argc >= 2){
		fd1 = open(argv[1], O_RDONLY);
		if (fd1 == -1)
			fd1 = 0; 
		if (argc ==3)
			fd2 = open(argv[2], O_WRONLY|O_CREAT|O_TRUNC, 0644);
		else 
			fd2 = 1;
		
	char ch;
	int n ;
	while ((n = read(fd1, &ch, 1))>0)
		write(fd2, &ch, 1);

	close(fd1);
	close(fd2);
   }
}
