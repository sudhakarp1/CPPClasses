#include <iostream>
using namespace std;

bool isPrime(int);
void printArr(int *, int);
void processArr(int *, int);
void fillArr(int *, int);

int main(){
	int arr[100];
	printArr(arr, 100);	
	fillArr(arr, 100);
	printArr(arr, 100);	
	processArr(arr, 100);
	printArr(arr, 100);	
}

void printArr(int *arr, int sz){
	for (int i = 0; i< 100; ++i)
		cout<<arr[i] <<"  ";
	cout<<endl;
}
void processArr(int *arr, int sz){
	for (int i = 0; i< sz; ++i)
		if (isPrime(arr[i]) == false)
			arr[i] = 0;
}

void fillArr(int *arr, int sz){
	cout<<"Enter first element: ";
	cin>>arr[0];
	for (int i = 1; i< sz; ++i)
		arr[i]= arr[0] + i;
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
