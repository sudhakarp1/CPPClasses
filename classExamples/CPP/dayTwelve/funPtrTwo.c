#include <stdio.h>

void fun();
void funOne();

void funCaller(void (*)());

int main(){
	funCaller(fun);
	funCaller(&funOne);
}

void funCaller(void (*fPtr)()){
	printf("Before calling...\n");
	fPtr();
	printf("After calling...\n");
	printf("-----------------------------------------\n");
}

void fun(){
	printf("in fun()...\n");
}
void funOne(){
	printf("in funOne()...\n");
}
