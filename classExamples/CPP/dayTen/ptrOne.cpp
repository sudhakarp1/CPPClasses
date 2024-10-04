#include <iostream>
using namespace std;

void change(int *);

int main(){
	int var = 10;
	cout<<"var: "<<var<<endl;
	change(&var);
	cout<<"var: "<<var<<endl;
}
void change(int *var){
	*var += 100;
}
