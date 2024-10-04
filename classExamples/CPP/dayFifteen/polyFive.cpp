
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
void funCaller(Base *);

int main(){
	funCaller(new Base());
	funCaller(new Derived());
}
void funCaller(Base *bp){
	bp->funOne();
	//delete bp;
}
