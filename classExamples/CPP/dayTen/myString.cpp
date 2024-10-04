#include <iostream>
#include <cstring>
using namespace std;

class MyString{
  public:
	void initialize(const char *st = "Some string here");		
	void printString();
  private:
	enum {MAX=100};
	char str[MAX];
	int size;
};

int main(){
	MyString one;
	one.initialize("This is my initialization done here");
	one.printString();
	MyString two;
	two.initialize();
	two.printString();
}

void MyString::initialize(const char *st){
	size = strlen(st) + 1;
	strcpy(str, st);
}
void MyString::printString(){
	cout<<"size: "<<size<<"\tstr: "<<str<<endl;
}
