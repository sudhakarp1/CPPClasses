#include <iostream>
using namespace std;

bool isPrime(int);

int main(){
	int arr[100];
	cout<<"Enter first element: ";
	cin>>arr[0];
	for (int i = 1; i< 100; ++i)
		arr[i]= arr[0] + i;

	for (int i = 0; i< 100; ++i)
		cout<<arr[i] <<"  ";
	cout<<endl;

	//logic here
	for (int i = 0; i< 100; ++i)
		if (isPrime(arr[i]) == false)
			arr[i] = 0;
		
	for (int i = 0; i< 100; ++i)
		cout<<arr[i] <<"  ";
	cout<<endl;
}

bool isPrime(int num){
	bool prime = true;
	for (int cnt = 2; cnt < num; ++cnt)
		if(num % cnt == 0){
			prime = false;
			break;
		}

	return prime;
}
