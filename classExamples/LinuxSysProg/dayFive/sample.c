#include <stdio.h>

int main(int argc, char *argv[]){
	int cnt;
	while (cnt < argc){
		printf("argv[%d] ---> %s...\n",cnt, argv[cnt]);
		cnt++;
	}	
}
