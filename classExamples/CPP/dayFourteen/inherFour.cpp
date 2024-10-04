#include <iostream>
using namespace std;

class Base{
	int dataOne;
public:
	void funOne(){
		cout<<"Base::funOne()..."<<endl;
	}
};

class DerivedOne:public virtual Base{
	int dataTwo;
public:
	void funTwo(){
		cout<<"DerivedOne::funTwo()..."<<endl;
	}
};
class DerivedTwo:virtual public Base{
	int dataThree;
public:
	void funThree(){
		cout<<"DerivedTwo::funThree()..."<<endl;
	}
};

class DerivedLast: public DerivedOne, public DerivedTwo{

};


int main(){
	DerivedLast dl;
	dl.funOne();
}
