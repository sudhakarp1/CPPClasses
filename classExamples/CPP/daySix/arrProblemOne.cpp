#include <iostream>
using namespace std;

int main(){
	int arr[100];
	cout<<"Enter first element: ";
	cin>>arr[0];
	for (int i = 1; i< 100; ++i)
		arr[i]= arr[0] + i;
	for (int i = 0; i< 100; ++i)
		cout<<arr[i] <<"  ";
	cout<<endl;
}
