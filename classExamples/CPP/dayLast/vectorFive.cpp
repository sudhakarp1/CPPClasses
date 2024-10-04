#include <vector>
#include <iostream>
using namespace std;

struct Test{
	Test(){cout<<"Test::Test()"<<endl;}
	Test(int x){cout<<"Test::Test("<<x<<")"<<endl;}
	Test(const Test&){cout<<"Test::Test(const Test&)"<<endl;}
	Test(Test &&){cout<<"Test::Test(Test &&)"<<endl;}

	Test& operator=(const Test &){ cout<<"operator="<<endl;	return *this; 	}
	void disp(){cout<<"Test::disp()"<<endl; }
	~Test(){cout<<"Test::~Test()"<<endl;}
};


int main(){
	Test obj(10001);
	vector<Test> tVec;
	for(int cnt=0; cnt < 2; ++cnt)
		tVec.push_back(obj);		
		//tVec.emplace_back(Test(cnt+1001));		
}

