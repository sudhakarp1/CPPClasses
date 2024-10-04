#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Array{
	const int size;
	int *arr;
public:
	Array():Array(5){} //c'tor delegation Modern C++
	Array(int sz):size(sz), arr(new int[size]) { 
		for(int cnt=0;cnt < size; ++cnt){
			arr[cnt] = rand() % 100;
		}
	}
	void sort(){
 		int i, j, min_idx;
 
    	for (i = 0; i < size - 1; i++) {
        	min_idx = i;
        	for (j = i + 1; j < size; j++) {
            	if (arr[j] < arr[min_idx])
                	min_idx = j;
        	}
 	        if (min_idx != i)
    	        swap(arr[min_idx], arr[i]);
    	}	
	}

	void disp(){
		cout<<"Array: ";
		for(int cnt=0;cnt < size; ++cnt)
			cout<<arr[cnt]<<"  ";
		cout<<"\n**************************************\n";
	}
};

int main(){
	srand(time(NULL));

	Array one;
	one.disp();
	one.sort();
	one.disp();

	Array two=10;
	two.disp();
	two.sort();
	two.disp();
}

