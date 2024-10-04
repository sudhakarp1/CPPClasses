/*
 *  Pointer as a data member 
 *  Performing deep copy to handle dangling pointer
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
	size = rhs.size; //  deep copy
	if (size!=0){
		str = new char[size];//allocate separate memory
		size = rhs.size; //  copy
		strcpy(str, rhs.str); //copy data
	}else
		str = nullptr;
}

MyString::MyString(){
	size = 0;
	str=nullptr;
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
	if (size!=0)
		cout<<"\tstr: "<<str<<endl;
	else
		cout<<"Empty string..."<<endl;
}
