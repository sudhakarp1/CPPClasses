#include <iostream>
using namespace std;

void fun();
void fun(int);
void fun(int,int);

int main(){
	fun();
	fun(10);
	fun(10,20);
}
