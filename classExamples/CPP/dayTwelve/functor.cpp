#include <iostream>
using namespace std;

class Sample{
public:
	void operator()(){
		cout<<"void operator()"<<endl;
	}
	void operator()(int x){
		cout<<"void operator("<<x<<")"<<endl;
	}
};

int main(){
	Sample x;
	x();
	x(100);
}
