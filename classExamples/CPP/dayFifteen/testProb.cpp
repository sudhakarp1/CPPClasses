

#include <iostream>
using namespace std;

class Base{
public:
	virtual	void funOne(){
		cout<<"Base::funOne()..."<<endl;
	}
};
class Derived:public Base{

public:
	void funOne(){
		cout<<"Derived::funOne()..."<<endl;
	}

};
void funCaller(Base &);

int main(){
	Base b;
	Derived d;
//	funCaller(b);
	funCaller(d);
}
void funCaller(Base &br){
	br.funOne();
}
