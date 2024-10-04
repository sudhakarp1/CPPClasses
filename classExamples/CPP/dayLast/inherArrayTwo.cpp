/*  Code is Accepted. //We are not violating DRY Principle
 *	Skeleton part of the business in the base class, variation part
 *	are delegated to subclasses.
 *	Template Pattern Method
 *
 */
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Array{
protected:		
	const int size;
	int *arr;
	virtual bool Condition(int ,int ) = 0;
public:
	Array():Array(5){} //c'tor delegation Modern C++
	Array(int sz):size(sz), arr(new int[size]) { 
		for(int cnt=0;cnt < size; ++cnt){
			arr[cnt] = rand() % 100;
		}
	}
	void sort() {
 		int i, j, min_idx;
 
    	for (i = 0; i < size - 1; i++) {
        	min_idx = i;
        	for (j = i + 1; j < size; j++) {
            	if (Condition(arr[j], arr[min_idx]))
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
struct ArrayDescending:Array{
	ArrayDescending(){}
	ArrayDescending(int size):Array(size) {}
protected:
	bool Condition(int n1, int n2){
		return n1 > n2;
	}
};


struct ArrayAscending:Array{
	ArrayAscending(){}
	ArrayAscending(int size):Array(size) {}
protected:
	bool Condition(int n1, int n2){
		return n1 < n2;
	}

};

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

