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
Sample& fun(Sample &obj){
	obj.disp();
	return obj;
}
int main(){
	Sample obj;
    fun(obj);	
}
