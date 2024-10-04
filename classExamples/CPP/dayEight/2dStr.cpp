#include <iostream>
using namespace std;

int main(){
	char strs[][6] = {"Hello","how","are", "you"};

	for (int cnt = 0 ; cnt  < 4; ++cnt)
		cout<<"strs["<<cnt<<"]: "<<strs[cnt]<<endl;
}
