#include <iostream>
using namespace std;

class BaseOne{
public:
	void fun(){cout<<"BaseOne::fun()"<<endl;}
};	

class BaseTwo{
public:
	void fun(){cout<<"BaseTwo::fun()"<<endl;}
};	
class Derived: public BaseOne, public BaseTwo{
};		
		
int main(){
	Derived d; 
	d.BaseOne::fun();
	d.BaseTwo::fun();
}	

