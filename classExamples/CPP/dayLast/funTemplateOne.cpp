#include <iostream>
using namespace std;

template<typename DataType>
void fun(DataType var){
	cout<<"var: "<<var<<endl;
}

int main(){
	fun(10);
	fun('A');
	fun(10.92374f);
	fun(10.823);
	fun("C Style string here");
}
