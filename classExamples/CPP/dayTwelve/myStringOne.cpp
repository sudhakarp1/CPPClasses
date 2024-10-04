/*
 *  Pointer as a data member 
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
	
	MyString operator+(const char *);
	MyString operator+(const MyString &);

	void printString();
	~MyString();
  private:
	char *str;
	int size;
};

int main(){
	MyString one= "This is my initialization done here";
	MyString two = one + "hello";
	MyString three = one + two;

	one.printString();
	two.printString();
	three.printString();
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

MyString MyString::operator+(const char *st){
	MyString res;
	res.size = size + strlen(st) + 1;
	res.str = new char[res.size];
	strcpy(res.str, str);
	strcat(res.str, " ");
	strcat(res.str, st);
	return res;	
}

MyString  MyString::operator+(const MyString &rhs){
	MyString res;
	res.size = size + rhs.size;
	res.str = new char[res.size];
	strcpy(res.str, str);
	strcat(res.str, " ");
	strcat(res.str, rhs.str);
	return res;
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

