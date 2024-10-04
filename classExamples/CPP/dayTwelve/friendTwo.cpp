#include <iostream>
using namespace std;

class Pointer; //forward declaration
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
	friend class Pointer;
};
class Pointer{
	Sample *ptr;
public:
	Pointer(int x=0): ptr(new Sample(x)) {}
	void disp(){ ptr->disp(); }
	~Pointer(){ delete ptr; }	
};
int main(){
	Pointer obj = 100;
	obj.disp();	
}

