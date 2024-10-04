#include <iostream>
using namespace std;

class Sample{
	int data;
public:
	Sample(){ //default constructor
		data = 0;
		cout<<"default Sample("<<data<<")...\n";
	}
	Sample(int x){ //single argument/parameter constructor
		data = x;
		cout<<"single args Sample("<<data<<")...\n";
	}
	Sample(const Sample &obj){//copy constructor
		data = obj.data;
		cout<<"copy Sample("<<data<<")...\n";
	}

	~Sample(){//destructor
		cout<<"~Sample()"<<endl;
	}
	void disp(){
		cout<<"void disp  data: "<<data<<endl;
	}
};

int main(){
	Sample obj; 
	Sample objOne=10; // int x = 10;
	Sample objTwo = objOne; // int y = x;
	objOne.disp();
	obj.disp();
	objTwo.disp();
}
