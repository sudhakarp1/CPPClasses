#include <vector>
#include <iostream>
using namespace std;

struct Test{
	Test(){cout<<"Test::Test()"<<endl;}
	Test(int x){cout<<"Test::Test("<<x<<")"<<endl;}
	Test(Test&){cout<<"Test::Test(const Test&)"<<endl;}
	Test(Test &&){cout<<"Test::Test(Test &&)"<<endl;}

	Test& operator=(const Test &){ cout<<"operator="<<endl;	return *this; 	}
	void disp(){cout<<"Test::disp()"<<endl; }
	~Test(){cout<<"Test::~Test()"<<endl;}
};


int main(){
	Test obj(10);
	vector<Test> tVec(2); //default construction...
	for(auto &cnt: tVec)
		cnt = obj; //assignment here
}

