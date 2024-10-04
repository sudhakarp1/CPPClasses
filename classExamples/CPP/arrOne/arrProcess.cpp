#include <arrOne.h>

void processArr(int *arr, int sz){
	for (int i = 0; i< sz; ++i)
		if (isPrime(arr[i]) == false)
			arr[i] = 0;
}
