#include <iostream>
using namespace std;

class Sample{
	static int data; //declaration
public:
	void disp(){
		cout<<"void disp  data: "<<data<<endl;
	}
	static int getData(){
		return data;
	}

};

int main(){
	Sample x;
	x.disp();
}

int Sample::data = 100; //definition
