#include <iostream>
using namespace std;

int main(){
	int row, col;
	cout<<"Enter row and col: ";
	cin>>row>>col;

	int **ptr = new int *[row];
	for (int cnt = 0; cnt < row; ++cnt)
		ptr[cnt] = new int[col];	

	int num = 1;
	for(int rCnt = 0 ; rCnt < row; ++rCnt)
		for(int cCnt = 0 ; cCnt < col; ++cCnt)
			ptr[rCnt][cCnt] = num++;

	for(int rCnt = 0 ; rCnt < row; ++rCnt){
		for(int cCnt = 0 ; cCnt < col; ++cCnt)
			cout<<ptr[rCnt][cCnt]<<"   ";
		cout<<endl;
	}
	for (int cnt = 0; cnt < row; ++cnt)
		delete []ptr[cnt];
	delete ptr;
}
