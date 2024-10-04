#include <iostream>
using namespace std;

void funThree(){
	cout<<"Finished...\n";
}

void funTwo(){
	cout<<"1. in funTwo() ...\n";
	funThree();
	cout<<"2. in funTwo() ...\n";
}
void funOne(){
	cout<<"1. in funOne() ...\n";
	funTwo();
	cout<<"2. in funOne() ...\n";
}

void fun(){
	cout<<"1. in fun() ...\n";
	funOne();
	cout<<"2. in fun() ...\n";
}

int main(){
	fun();
}
