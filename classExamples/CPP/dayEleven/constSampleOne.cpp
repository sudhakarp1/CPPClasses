#include <iostream>
using namespace std;

class Sample{
	const int data;
public:
	Sample(int x=0):data(x){
	}
	~Sample(){
	}
	void disp(){
		cout<<"void disp  data: "<<data<<endl;
	}
};

int main(){
	Sample x = 10;
	x.disp();
}
