#include <iostream>
using namespace std;

int ** createMatrix(int ,int);
void printMatrix(int **, int ,int);
void fillMatrix(int **, int ,int, int);

int main(){
	int row, col;
	cout<<"Enter row and col: ";
	cin>>row>>col;
	
	int **mat = createMatrix(row, col);
	fillMatrix(mat, row, col, 1);
	printMatrix(mat, row, col);
}
int ** createMatrix(int row,int col){
	int **mat = new int *[row];
	for (int cnt = 0; cnt < row; ++cnt)
		mat[cnt]=new int[col];

	return mat;
}

void printMatrix(int **mat, int row,int col){
	for(int rCnt = 0 ; rCnt < row; ++rCnt){
		for(int cCnt = 0 ; cCnt < col; ++cCnt)
			cout<<mat[rCnt][cCnt]<<"   ";
		cout<<endl;
	}
}

void fillMatrix(int **mat, int row,int col , int num){
	for(int rCnt = 0 ; rCnt < row; ++rCnt)
		for(int cCnt = 0 ; cCnt < col; ++cCnt)
			mat[rCnt][cCnt] = num++;
}
