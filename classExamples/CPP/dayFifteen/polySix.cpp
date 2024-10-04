
#include <iostream>
using namespace std;

class Base{
public:
	virtual	void funOne() = 0; //pure virtual function
};
class Derived:public Base{

public:
	void funOne(){
		cout<<"Derived::funOne()..."<<endl;
	}

};
void funCaller(Base *);

int main(){
	Base b;	
//	funCaller(new Base());
//	funCaller(new Derived());
}
void funCaller(Base *bp){
	bp->funOne();
	//delete bp;
}
