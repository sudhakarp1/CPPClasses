#include <iostream>
using namespace std;

int main(){
	int var = 10;
	int &varOne = var;

	cout<<var<<"\t &var: "<<&var<<endl;
	cout<<varOne<<"\t &var: "<<&varOne<<endl;
	var+=10;
	cout<<var<<"\t &var: "<<&var<<endl;
	cout<<varOne<<"\t &var: "<<&varOne<<endl;
	varOne+=10;
	cout<<var<<"\t &var: "<<&var<<endl;
	cout<<varOne<<"\t &var: "<<&varOne<<endl;
}
