#include <vector>
#include <iostream>
using namespace std;

int main(){
	int arr[100] = {1,2,3,4,5,6};
	vector<int> vec(arr, arr+100);
	cout<<"size: "<<vec.size()<<"\tCapacity: "<<vec.capacity()<<endl;
}
