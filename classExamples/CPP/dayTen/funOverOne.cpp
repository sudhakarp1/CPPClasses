#include <iostream>
using namespace std;

void fun();

void fun(int);

void fun(int,int);
void fun(double, double);
void fun(int,double);
void fun(double, int);

int main(){
	fun();
	fun(10);

	fun(10,20);
	fun(10.23, 20.456);
	fun(10,20.345);
	fun(10.234, 20);
}
