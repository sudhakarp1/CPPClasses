#include <iostream>
#include <fstream>
using namespace std;

int main(){

	char str[100];
	ifstream obj("fileIOOne.cpp");	
	while (!obj.eof()){
		obj.getline(str, 100);
		cout<<str<<endl;
	}
}
