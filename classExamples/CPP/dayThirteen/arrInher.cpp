#include <iostream>
using namespace std;

class Array{
public:
	void fillArray(int );
	void printArray();
};

class StaticArray:public Array{
	int arr[MAX];
	int size;
	enum {MAX = 100};
public:	
	StaticArray();
	StaticArray(int);
	~StaticArray();
	void fillArray(int);
	void printArray();
};

class DynamicArray:public Array{
	int *arr;
	int size;
public:	
	DynamicArray();
	DynamicArray(int);
	
	~DynamicArray();
	void fillArray(int);
	void printArray();
};
