#include <iostream>
#include <cstring>
using namespace std;
void myStrcpy(char [], char []);

int main(){
	char str[20] = "Strings here";
	cout<<" str: "<<str<<endl;
	char dest[30];
	myStrcpy(dest, str);
	cout<<" dest: "<<dest<<endl;
}

void myStrcpy(char dest[],char str[]){
/*	int cnt = 0;
	while (dest[cnt]=str[cnt])
		cnt++;
*/
	for (int cnt=0; dest[cnt]=str[cnt]; ++cnt) 
			;
}
