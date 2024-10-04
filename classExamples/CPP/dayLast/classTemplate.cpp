#include <iostream>
using namespace std;

template <typename T>
class Sample{
	T data;
public:
	Sample (T arg=T()) : data(arg) {}
	void disp(){
		cout<<"data: "<<data<<endl;
	}
};

int main(){
	Sample <int> iVar=100;
	Sample<double> dVar=123.345;
	Sample<float> fVar = 2134.345f;

	iVar.disp();
	dVar.disp();
	fVar.disp();
}
