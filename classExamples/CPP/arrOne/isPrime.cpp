#include <arrOne.h>

bool isPrime(int num){
	bool prime = true;
	for (int cnt = 2; cnt < num; ++cnt)
		if(num % cnt == 0){
			prime = false;
			break;
		}

	return prime;
}
