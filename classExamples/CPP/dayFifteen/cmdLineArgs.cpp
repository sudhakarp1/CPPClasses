#include<iostream>
using namespace std;

int main(int count, char *args[]){
	cout<<"Total number of args: "<<count<<endl;
	for (int cnt = 0; cnt < count; ++cnt)
		cout<<"args["<<cnt<<"] --> "<<args[cnt]<<endl;
}

