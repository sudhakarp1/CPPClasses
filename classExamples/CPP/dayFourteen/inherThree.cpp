#include <iostream>
using namespace std;

class Base{
	int dataOne;
public:
	Base(int x=0): dataOne(x){
		cout<<"B ";
	}
	~Base(){
		cout<<"~B ";
	}
	void funOne(){
		cout<<"Base::funOne()..."<<endl;
	}
};

class Derived:public Base{
	int dataTwo;
public:
	Derived(int x = 10):dataTwo(x),Base(x){
		cout<<"D ";
	}
	~Derived(){
		cout<<"~D ";
	}
	void funTwo(){
		cout<<"Derived::funTwo()..."<<endl;
	}
};

int main(){
	Derived d;
}
