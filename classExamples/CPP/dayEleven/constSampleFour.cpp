#include <iostream>
using namespace std;

class Sample{
	int data;
public:
	Sample(int x=0):data(x){
	}
	void disp(){//non-const member function
		cout<<"void disp() data: "<<data<<endl;
	}
};

int main(){
	Sample x = 10; //int x = 10;
	x.disp();
	const Sample y = 20;//const int y = 20;
	y.disp();
}
