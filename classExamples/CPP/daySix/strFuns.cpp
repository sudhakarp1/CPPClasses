#include <iostream>
using namespace std;

void myStrcpy(char [], char []);
int myStrcmp(const char [],const char []);

int main(){
	char str[] = "Some strings here";
	char var[30];
	myStrcpy(var, str);
	cout<<"res: "<<myStrcmp(var, str)<<endl;
	cout<<"res: "<<myStrcmp("hello", "Hello")<<endl;
}


void myStrcpy(char dest[], char src[]){
	int cnt = 0;
	while (dest[cnt] = src[cnt])
		cnt++;
}

int myStrcmp(const char str1[],const char str2[]){
	int cnt = 0;
	while (str1[cnt] && str2[cnt] && str1[cnt] == str2[cnt])
			cnt++;
	if (str1[cnt] == str2[cnt])
		return 0;
	else if	(str1[cnt] > str2[cnt])
		return 1;
	
	return -1;			
}
