#include <iostream>
#include <cstring>
using namespace std;

class MyString{
  public:
	MyString();		
	MyString(const char *st);		
	void printString();
	~MyString();
  private:
	enum {MAX=100};
	char str[MAX];
	int size;
};
int main(){
	MyString one= "This is my initialization done here";
	one.printString();
	MyString two;
	two.printString();
}
MyString::MyString(){
	size = 0;
	str[0] = '\0';
}

MyString::~MyString(){
	size = 0;
	str[0] = '\0';
}

MyString::MyString(const char *st){
	size = strlen(st) + 1;
	strcpy(str, st);
}
void MyString::printString(){
	cout<<"size: "<<size<<"\tstr: "<<str<<endl;
}
