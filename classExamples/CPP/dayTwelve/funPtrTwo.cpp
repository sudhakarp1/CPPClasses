#include <iostream>
using namespace std;

int add(int,int);
int sub(int,int);

using FPTR = int (*)(int,int); 

int calculate(FPTR, int, int);

int main(){
	cout<<"Adding "<<calculate(add, 10, 20)<<endl;
	cout<<"Subtracting "<<calculate(sub, 100, 20)<<endl;
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
