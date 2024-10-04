#include <iostream>
using namespace std;

void fun(int);
void fun(char );
void fun(float );
void fun(double );
void fun(const char *);

int main(){
	fun(10);
	fun('A');
	fun(10.92374f);
	fun(10.823);
	fun("C Style string here");
}
void fun(int var){
	cout<<"int : "<<var<<endl;
}
void fun(char var){
	cout<<"char : "<<var<<endl;
}
void fun(float var){
	cout<<"float : "<<var<<endl;
}
void fun(double var){
	cout<<"double : "<<var<<endl;
}
void fun(const char *var){
	cout<<"const char * : "<<var<<endl;
}
