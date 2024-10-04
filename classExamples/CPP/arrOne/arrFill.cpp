#include <arrOne.h>

void fillArr(int *arr, int sz){
	cout<<"Enter first element: ";
	cin>>arr[0];
	for (int i = 1; i< sz; ++i)
		arr[i]= arr[0] + i;
}
