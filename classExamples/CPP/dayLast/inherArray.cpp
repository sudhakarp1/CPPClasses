/*
 *	Sorry We cannot accept this code...
 *
 * 	DRY ---> Dont Repeat your Self/Code
 */
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Array{
protected:		
	const int size;
	int *arr;
public:
	Array():Array(5){} //c'tor delegation Modern C++
	Array(int sz):size(sz), arr(new int[size]) { 
		for(int cnt=0;cnt < size; ++cnt){
			arr[cnt] = rand() % 100;
		}
	}
	virtual void sort()= 0 ;
	void disp(){
		cout<<"Array: ";
		for(int cnt=0;cnt < size; ++cnt)
			cout<<arr[cnt]<<"  ";
		cout<<"\n**************************************\n";
	}
};
struct ArrayDescending:Array{
	ArrayDescending(){}
	ArrayDescending(int size):Array(size) {}
	void sort() override {
 		int i, j, min_idx;
 
    	for (i = 0; i < size - 1; i++) {
        	min_idx = i;
        	for (j = i + 1; j < size; j++) {
            	if (arr[j] > arr[min_idx])
                	min_idx = j;
        	}
 	        if (min_idx != i)
    	        swap(arr[min_idx], arr[i]);
    	}	
	}
};


struct ArrayAscending:Array{
	ArrayAscending(){}
	ArrayAscending(int size):Array(size) {}
	void sort() override {
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
};
//violates DRY  --> Dont Repeat Yourself
int main(){
	srand(time(NULL));

	ArrayAscending one;
	one.disp();
	one.sort();
	one.disp();

	ArrayDescending two=10;
	two.disp();
	two.sort();
	two.disp();
}

