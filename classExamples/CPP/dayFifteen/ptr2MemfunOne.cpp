#include <iostream>
using namespace std;

struct Test{
	void fun(){cout<<"Test::fun()"<<endl;}
	void funOne(){cout<<"Test::funOne()"<<endl;}
};

int main(){
	auto ptr = &Test::fun;//Modern C++
	Test obj;
	(obj.*ptr)();
	Test objOne;
	(objOne.*ptr)();
	Test *tPtr = &obj;
	(tPtr->*ptr)();

}
