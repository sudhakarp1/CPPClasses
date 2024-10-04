#include <iostream>

int var = 20;

int main(){
	int var = 10;
	std::cout<<"local var : "<<var<<"\tGlobal : "<<::var<<std::endl;
}
