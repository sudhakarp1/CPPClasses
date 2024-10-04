#include <iostream>
using namespace std;

void printMatrix(int [][4], int ,int);
void fillMatrix(int [][4], int ,int, int);

int main(){
	int mat[5][4];
	
	fillMatrix(mat, 5, 4, 1);
	printMatrix(mat, 5, 4);
}

void printMatrix(int mat[][4], int row,int col){
	for(int rCnt = 0 ; rCnt < row; ++rCnt){
		for(int cCnt = 0 ; cCnt < col; ++cCnt)
			cout<<mat[rCnt][cCnt]<<"   ";
		cout<<endl;
	}
}

void fillMatrix(int mat[][4], int row,int col , int num){
	for(int rCnt = 0 ; rCnt < row; ++rCnt)
		for(int cCnt = 0 ; cCnt < col; ++cCnt)
			mat[rCnt][cCnt] = num++;
}
