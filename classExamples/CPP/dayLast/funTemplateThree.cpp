#include <iostream>
using namespace std;

//generic function
template<class T> /*<typename T>*/
void fun(T var){
	cout<<"var: "<<var<<endl;
}

template<> /*specialized for int type*/
void fun<int>(int var){
	cout<<"int : "<<var<<endl; 
}

int main(){
	fun(10);
	fun('A');
	fun(10.92374f);
	fun(10.823);
	fun("C Style string here");
	string var = "This is C++ string type";
	fun(var);
}
