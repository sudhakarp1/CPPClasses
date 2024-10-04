#include <iostream>
using namespace std;

class Base{
	int dataOne;
public:
	void funOne(){
		cout<<"Base::funOne()..."<<endl;
	}
};

class Derived:public Base{
	int dataTwo;
public:
	void funTwo(){
		cout<<"Derived::funTwo()..."<<endl;
	}

};

int main(){
	cout<<"Base Size: "<<sizeof(Base)<<endl;
	cout<<"Derived Size: "<<sizeof(Derived)<<endl;
}
