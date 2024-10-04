#include <iostream>
using namespace std;

void printArr(int [], int );


int main(){
	int arr[100] = {1,2,3,4,5,6,7};
	cout<<"in main() Size: "<<sizeof(arr)<<endl;
	printArr(arr, 100);
}

void printArr(int arr[], int sz){
	cout<<"in printArr() Size: "<<sizeof(arr)<<endl;
}
