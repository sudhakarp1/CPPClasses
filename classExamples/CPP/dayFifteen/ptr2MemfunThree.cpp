#include <iostream>
using namespace std;

struct Test{
	void fun(){cout<<"Test::fun()"<<endl;}
	void funOne(){cout<<"Test::funOne()"<<endl;}
};
int main(){
	using Name = void (Test::*)();
		   
	Name ptr = &Test::fun;//Modern C++
	Test obj;
	(obj.*ptr)();
	Test objOne;
	(objOne.*ptr)();
	Test *tPtr = &obj;
	(tPtr->*ptr)();
	
	ptr = &Test::funOne;//Modern C++
	(obj.*ptr)();
	(objOne.*ptr)();
	(tPtr->*ptr)();
}
