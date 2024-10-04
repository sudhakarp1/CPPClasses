#include <vector>
#include <iostream>
using namespace std;

int main(){
	int arr[100] = {1,2,3,4,5,6};
	vector<int> vec(arr, arr+100);
	cout<<"size: "<<vec.size()<<"\tCapacity: "<<vec.capacity()<<endl;

	vec.erase(vec.begin() + 50, vec.end());

	cout<<"size: "<<vec.size()<<"\tCapacity: "<<vec.capacity()<<endl;
	vec.resize(vec.size());
	cout<<"size: "<<vec.size()<<"\tCapacity: "<<vec.capacity()<<endl;
	vec.shrink_to_fit();
	cout<<"size: "<<vec.size()<<"\tCapacity: "<<vec.capacity()<<endl;
}


