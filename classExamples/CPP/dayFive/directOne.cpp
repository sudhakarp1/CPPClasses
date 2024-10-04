#include <iostream>
using namespace std;

void recur(int);

int main(){
	recur(1);
	cout<<endl;
}

void recur(int num){
	if (num <= 10){
		cout<<num<<" ";
		recur(num + 1);
	}

}
