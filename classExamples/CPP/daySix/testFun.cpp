#include <iostream>
using namespace std;

void fun();
void funOne(int);
void funTwo(int,int);
void funThree(int,int,int);
void funFour();


int main(){
	fun();
	funFour();
	funTwo(100,200);
	funOne(1000);
	funThree(1,2,3);
}

void fun(){
	cout<<"void fun() called...\n";
}
void funOne(int a){
	cout<<"void funOne("<<a<<") called...\n";
}

void funTwo(int a,int b){
	cout<<"void funTwo("<<a<<", "<<b<<") called...\n";
}
void funThree(int a,int b,int c){
	cout<<"void funThree("<<a<<", "<<b<<", "<<c<<") called...\n";
}
void funFour(){
	cout<<"void funFour() called...\n";
}


