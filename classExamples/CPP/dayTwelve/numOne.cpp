#include <iostream>
using namespace std;

class Num{
	int num;
public:
	Num(int x=0):num(x){}

	Num Add(int num);
	Num Add(const Num&);

	Num Sub(int num);
	Num Sub(const Num&);

	void disp(){
		cout<<"Num: "<<num<<endl;
	}
};

int main(){
	Num a = 10, b = 20;

	Num c = a.Add(b);
	Num d = a.Add(100);

	Num e = a.Sub(b);
	Num f = a.Sub(100);

	a.disp();  b.disp(); c.disp();
	d.disp(); e.disp(); f.disp();
}

Num Num::Add(int n){
	Num Res(num + n);
	return Res;
}

Num Num::Add(const Num& rhs){
	Num Res(num + rhs.num);
	return Res;
}

Num Num::Sub(int n){
	Num Res(num - n);
	return Res;
}

Num Num::Sub(const Num& rhs){
	Num Res(num - rhs.num);
	return Res;
}

