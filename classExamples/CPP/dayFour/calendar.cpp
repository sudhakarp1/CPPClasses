#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int w = 2;
	cout<<"Su Mo Tu We Th Fr Sa"<<endl;
	for (auto cnt = 1; cnt <= w; ++cnt)
		cout<<setw(3)<<left<<' ';
	for (auto cnt = 1; cnt <= 30; ++cnt){
		cout<<setw(3)<<left<<cnt;
		if ((w + cnt) % 7 == 0)
			cout<<endl;
	}
	cout<<endl;
}

