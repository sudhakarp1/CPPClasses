#include <iostream>
using namespace std;

int var = 20;
void fun();

namespace Mine{
	int var = 200;
	void fun();
}
namespace Yours{
	int var = 300;
	void fun();
}
namespace Ours{
	int var = 500;
	void fun();
}
int main(){
	int var = 10;
	cout<<"Local: "<<var<<"\tGlobal: "<<::var<<endl;
	cout<<"Mine "<<Mine::var<<endl;
    cout<<"Yours"<<Yours::var<<endl;
	cout<<"Ours "<<Ours::var<<endl;
	fun();
	Mine::fun();
	Yours::fun();
	Ours::fun();
}
void fun(){
	cout<<"var: "<<var<<"\t::fun()..."<<endl;
}
void Mine::fun(){
	cout<<"var: "<<var<<"\tMine::fun()..."<<endl;
}
void Yours::fun(){
	cout<<"var: "<<var<<"\tYours::fun()..."<<endl;
}
void Ours::fun(){
	cout<<"var: "<<var<<"\tOurs::fun()..."<<endl;
}
