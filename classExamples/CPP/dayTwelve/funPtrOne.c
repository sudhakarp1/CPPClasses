#include <stdio.h>

void fun();
void funOne();

int main(){
	void (*fPtr)();

	fPtr = &fun; // or fPtr = fun;
	fPtr();


	fPtr = funOne; // or fPtr = &funOne;
	fPtr();
}

void fun(){
	printf("in fun()...\n");
}
void funOne(){
	printf("in funOne()...\n");
}
