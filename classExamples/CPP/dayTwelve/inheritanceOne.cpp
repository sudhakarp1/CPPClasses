#include <iostream>
using namespace std;

class Base{
public:
	void fun(){cout<<"Base::fun()"<<endl;}
};	

class Derived: public Base{
};		
		
int main(){
	Derived d; 
	d.fun();
}	

