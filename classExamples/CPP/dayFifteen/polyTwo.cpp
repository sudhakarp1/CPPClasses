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
int main(){
	Base b, *bp;
	Derived d;

	bp = &b;
	bp->funOne();

	bp = &d;
	bp->funOne();
}
