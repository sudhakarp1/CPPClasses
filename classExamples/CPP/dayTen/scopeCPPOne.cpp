#include <iostream>
using namespace std;

int var = 20;

int main(){
	int var = 10;
	cout<<"local var : "<<var<<"\tGlobal : "<<::var<<endl;
}
