#include <vector>
#include <iostream>
using namespace std;

int main(){
	int arr[100] = {1,2,3,4,5,6};
	vector<int> vec(arr, arr+100);
	cout<<"vec[10]: "<<vec[10]<<endl;
	cout<<"vec[100]: "<<vec[100]<<endl;

	cout<<"vec.at(10): "<<vec.at(10)<<endl;
	cout<<"vec.at(100): "<<vec.at(100)<<endl;//throws exception
}


