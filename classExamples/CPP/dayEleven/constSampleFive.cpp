#include <iostream>
using namespace std;

class Sample{
	mutable int data;
public:
	Sample(int x=0):data(x){
		//data = x;	
	}
	void disp(){//non-const member function
		data+=10;
		cout<<"void disp() data: "<<data<<endl;
	}
	void disp()const { //const member function
		data += 10;
		cout<<"void disp()const  data: "<<data<<endl;
	}
};

int main(){
	Sample x = 10; //int x = 10;
	x.disp();
	const Sample y = 20;//const int y = 20;
	y.disp();
}
