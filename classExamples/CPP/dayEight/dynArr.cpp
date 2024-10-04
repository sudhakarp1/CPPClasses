#include <iostream>
using namespace std;

int main(){
	int size;
	cout<<"Enter the number of elements: ";
	cin>>size;
		
	int *ptr = new int[size];
	for (auto cnt = 0 ; cnt <size; ++cnt)
		ptr[cnt] = 100 + cnt;
	
	for (auto cnt = 0 ; cnt <size; ++cnt)
		cout<<ptr[cnt]<<" ";
	cout<<endl;

	delete []ptr;
}
