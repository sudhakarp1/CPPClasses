#include <iostream>
using namespace std;

void fun(int =10,int = 20);

int main(){
	fun();
	fun(100);
	fun(100,200);
}

void fun(int x, int y){
	cout<<"x: "<<x<<"\ty: "<<y<<endl;
}
