#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

void fileCopy(int , int );

int main(int argc, char *argv[]){
	int fd1, fd2;
	if (argc == 1){
		fileCopy(0, 1);
	}else if (argc == 2){
		fd1 = open(argv[1], O_RDONLY);
		fileCopy(fd1, 1);
	}else if (argc > 2){
		int cnt;
		fd2 = open(argv[argc - 1], O_WRONLY|O_CREAT|O_TRUNC, 0644);
		for (cnt = 1; cnt < argc - 1; ++cnt){ 
				fd1 = open(argv[cnt], O_RDONLY);
				printf("Printing fd1 --> %d\n", fd1);
				fileCopy(fd1, fd2);
			//	close(fd1);
		}
		close(fd2);
   }
}
void fileCopy(int fd1, int fd2){
	char ch;
	int n ;
	while ((n = read(fd1, &ch, 1))>0)
		write(fd2, &ch, 1);
}

