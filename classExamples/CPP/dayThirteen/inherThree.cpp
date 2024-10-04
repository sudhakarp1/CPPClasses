#include <iostream>
using namespace std;

class BaseOne{
public:
	BaseOne(){cout<<"BaseOne()...\n";}
	BaseOne(int){cout<<"BaseOne(int)...\n";}

	~BaseOne(){cout<<"~BaseOne()...\n";}
	void fun(){cout<<"BaseOne::fun()"<<endl;}
};	

class BaseTwo{
public:
	BaseTwo(){cout<<"BaseTwo()...\n";}
	BaseTwo(int){cout<<"BaseTwo(int)...\n";}

	~BaseTwo(){cout<<"~BaseTwo()...\n";}
	void fun(){cout<<"BaseTwo::fun()"<<endl;}
};	

class Derived: public BaseOne, public BaseTwo{
public:
	Derived(){cout<<"Derived()...\n";}
	Derived(int x):BaseOne(x), BaseTwo(x){cout<<"Derived(int)...\n";}

	~Derived(){cout<<"~Derived()...\n";}

};		
		
int main(){
	Derived d=100; 
}	

