#include <iostream>
using namespace std;

struct Test{
	void fun(){cout<<"Test::fun()"<<endl;}
	void funOne(){cout<<"Test::funOne()"<<endl;}
};

int main(){
	void (Test::*ptr)() = &Test::fun;
	Test obj;
	(obj.*ptr)();
	Test objOne;
	(objOne.*ptr)();
	Test *tPtr = &obj;
	(tPtr->*ptr)();
}
