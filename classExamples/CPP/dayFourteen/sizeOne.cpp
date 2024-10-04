#include <iostream>
using namespace std;

class Base{
public:
	virtual void funOne(){
		cout<<"Base::funOne()..."<<endl;
	}
	virtual void funThree(){
		cout<<"Base::funOne()..."<<endl;
	}
};

class Derived:public Base{

public:
	void funTwo(){
		cout<<"Derived::funTwo()..."<<endl;
	}

};

int main(){
	cout<<"Base Size: "<<sizeof(Base)<<endl;
	cout<<"Derived Size: "<<sizeof(Derived)<<endl;
}
