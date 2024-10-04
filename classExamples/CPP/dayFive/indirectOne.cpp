#include <iostream>
using namespace std;

void recurOdd(int);

void recurEven(int num){
	if (num <= 10){
		cout<<num<<" ";
		recurOdd(num + 1);
	}
}
void recurOdd(int num){
	if (num <= 10){
		cout<<num<<" ";
		recurEven(num + 1);
	}
}

int main(){
	recurOdd(1);
	cout<<endl;
}
