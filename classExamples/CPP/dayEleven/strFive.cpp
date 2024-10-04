/*
 *	Shallow copy with ownership transfer
 *
 */
#include <iostream>
#include <cstring>
using namespace std;

class MyString{
  public:
	MyString();		
	MyString(const char *st);		
	MyString(const MyString &rhs);		
	void printString();
	~MyString();
  private:
	char *str;
	int size;
};
int main(){
	MyString one= "This is my initialization done here";
	one.printString();
	{
		MyString two=one;
		two.printString();
	}
	one.printString();
}

MyString::MyString(const MyString &rhs){
	size = rhs.size; // memberwise copy also called shallow copy
	str=rhs.str;//
	if(size){ //giving up the ownership
		MyString &newAddr = const_cast<MyString &>(rhs);
		newAddr.size = 0;
		newAddr.str = nullptr;
	}
}

MyString::MyString(){
	size = 0;
	str = nullptr;
}

MyString::~MyString(){
	if (size != 0)
		delete []str;
	size = 0;
	str = nullptr;
}

MyString::MyString(const char *st){
	size = strlen(st) + 1;
	str = new char[size];
	strcpy(str, st);
}
void MyString::printString(){
	cout<<"size: "<<size;
	if (size != 0)
		cout<<"\tstr: "<<str<<endl;
	else
		cout<<"Empty string "<<endl;
}
