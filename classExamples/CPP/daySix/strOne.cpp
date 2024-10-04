#include <iostream>
#include <cstring>
using namespace std;
int myStrlen(char []);

int main(){
	char str[20] = "Strings here";
	cout<<str<<" Len: "<<strlen(str)<<"\tsize: "<<sizeof(str)<<endl;
	cout<<str<<" Len: "<<myStrlen(str)<<endl;
}

int myStrlen(char str[]){
	int cnt = 0;
	while (str[cnt] != '\0')
		cnt++;
	return cnt;
}
