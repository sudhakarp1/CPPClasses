/*
 *	Shallow copy with reference count
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
	int *cnt; //reference counter variable 
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
	if (size != 0){
		cnt = rhs.cnt;
		str=rhs.str;//
		*cnt += 1;
	}else{
		str = nullptr;
		cnt = nullptr;
	}

}

MyString::MyString():cnt(nullptr){
	size = 0;
	str = nullptr;

}

MyString::~MyString(){
	if ((--*cnt == 0) && size != 0)
    	delete []str;
}

MyString::MyString(const char *st):cnt(new int(1)){
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
