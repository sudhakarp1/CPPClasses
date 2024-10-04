#include <iostream>
using namespace std;

class Num{
	int num;
public:
	Num(int x=0):num(x){}

	Num operator+(int num);
	Num operator+(const Num&);

	Num operator-(int num);
	Num operator-(const Num&);

	void disp(){
		cout<<"Num: "<<num<<endl;
	}
};

int main(){
	Num a = 10, b = 20;

	Num c = a + b;
	Num d = a + 100;

	Num e = a - b;
	Num f = a - 100;

	a.disp();  b.disp(); c.disp();
	d.disp(); e.disp(); f.disp();
}

Num Num::operator+(int n){
	Num Res(num + n);
	return Res;
}

Num Num::operator+(const Num& rhs){
	Num Res(num + rhs.num);
	return Res;
}

Num Num::operator-(int n){
	Num Res(num - n);
	return Res;
}

Num Num::operator-(const Num& rhs){
	Num Res(num - rhs.num);
	return Res;
}

