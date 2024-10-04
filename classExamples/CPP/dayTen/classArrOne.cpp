#include <iostream>
using namespace std;

class MyArray{
public:
	void initialize(int sz = MAX){
		if (sz <= MAX)
			size = sz;
		else
			size = MAX;	
	}

	void fillArray(int first=1){
		for (int cnt=0; cnt<size; ++cnt)
			arr[cnt] = first + cnt;
	}
	void printArray(){
		cout<<"arr: ";	
		for (int cnt=0; cnt<size; ++cnt)
			cout<<arr[cnt]<<"  ";
		cout<<"\n**************************************************\n";
	}
private:	
	enum {MAX=100};
	int arr[MAX];
	int size;
};


int main(){
	MyArray one;

	one.initialize(20);
	one.fillArray(1001);
	one.printArray();

	MyArray two;

	two.initialize(200);
	two.fillArray();
	two.printArray();

}

