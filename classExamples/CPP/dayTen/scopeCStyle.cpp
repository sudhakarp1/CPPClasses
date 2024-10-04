#include <iostream>
using namespace std;

int var = 20;

int main(){
	int var = 10;
	cout<<"var : "<<var<<endl;
	{
		extern int var;
		cout<<"var : "<<var<<endl;
	}
}
