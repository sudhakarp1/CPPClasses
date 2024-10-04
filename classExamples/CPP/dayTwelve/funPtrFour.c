#include <stdio.h>

int add(int,int);
int sub(int,int);

typedef  int (*FPTR)(int,int); 

int calculate(FPTR, int, int);

int main(){
	printf("Adding %d\n", calculate(add, 10, 20));
	printf("Subtracting %d\n", calculate(sub, 100, 20));
}
int add(int x,int y){
	return x + y;
}
int sub(int x,int y){
	return x - y;
}

int calculate(FPTR fPtr, int x, int y){
	return fPtr(x,y);
}
