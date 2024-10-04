#include <iostream>
using namespace std;

class Sample{
	int data;
	Sample(int x=0){
		data = x;
		cout<<"Sample("<<x<<")...\n";
	}
	~Sample(){
		cout<<"~Sample()"<<endl;
	}
	void disp(){
		cout<<"void disp  data: "<<data<<endl;
	}
	friend int main();
};

int main(){
	Sample objOne=10;
	objOne.disp();
}

