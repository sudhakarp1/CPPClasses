#include <iostream>
using namespace std;

struct Test{
	void fun(){cout<<"Test::fun()"<<endl; }
	void funOne(){cout<<"Test::funOne()"<<endl; }
};

int main(){
	//auto pmf1 = &Test::fun;
	//void (Test::*pmf1)() = &Test::funOne;	
	using name = void (Test::*)();
	name pmf1 = &Test::fun;

	Test obj;
	(obj.*pmf1)();

	Test *ptr = &obj;
	(ptr->*pmf1)();
}
