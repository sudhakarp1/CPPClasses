#include <iostream>
#include <fstream>
using namespace std;

int main(){
	char ch;
	ifstream obj("fileIOOne.cpp");	
	while (!obj.eof()){
		obj.get(ch);
		cout<<ch;
	}
}
