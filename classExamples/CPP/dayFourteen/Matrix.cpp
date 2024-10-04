#include <iostream>
using namespace std;

class Matrix{
	int **arr;
	int row, col;
public:
	Matrix();
	Matrix(int );
	Matrix(int,int);

	Matrix(const Matrix &);

	Matrix Add(const Matrix &); 
	Matrix Mult(const Matrix &); 

	void fillMatrix(int first=1);
	void printMatrix();
};

int main(){
/*	
 	Matrix a=4;
	a.fillMatrix();
	a.printMatrix();
*/

 	Matrix a(4,5);
	a.fillMatrix(100);

	Matrix b = a;
	a.printMatrix();
	b.printMatrix();

	Matrix c = a.Add(b);
	c.printMatrix();
}

Matrix Matrix::Add(const Matrix &rhs){
	Matrix res(rhs.row, rhs.col);

	if (res.row && res.col){
		for (int rCnt = 0; rCnt < row; ++rCnt)
			for (int cCnt = 0; cCnt < col; ++cCnt)
				res.arr[rCnt][cCnt]= arr[rCnt][cCnt] + rhs.arr[rCnt][cCnt]; 
	}
	return res;
}

Matrix::Matrix(){
	row = col = 0;
	arr = nullptr;
}

Matrix::Matrix(int sz){
	row = col = sz;
	arr = new int *[row];
	for(int cnt = 0; cnt < row; ++cnt)
		arr[cnt] = new int[col];
}

Matrix::Matrix(int row,int col){
	this->row = row;
	this->col = col;
	arr = new int *[row];
	for(int cnt = 0; cnt < row; ++cnt)
		arr[cnt] = new int[col];
}

Matrix::Matrix(const Matrix &rhs){
	row = rhs.row;
	col = rhs.col;
	if (row && col){
		arr = new int *[row];
		for(int cnt = 0; cnt < row; ++cnt)
			arr[cnt] = new int[col];

		for (int rCnt = 0; rCnt < row; ++rCnt)
			for (int cCnt = 0; cCnt < col; ++cCnt)
				arr[rCnt][cCnt] = rhs.arr[rCnt][cCnt]; 
	}else{
		row = col = 0;
		arr = nullptr;
	}
}

void Matrix::fillMatrix(int first){
	for (int rCnt = 0; rCnt < row; ++rCnt)
		for (int cCnt = 0; cCnt < col; ++cCnt)
			arr[rCnt][cCnt] = first++;
}

void Matrix::printMatrix(){
	cout<<"Matrix: "<<endl;
	for (int rCnt = 0; rCnt < row; ++rCnt){
		for (int cCnt = 0; cCnt < col; ++cCnt)
			cout<<arr[rCnt][cCnt]<<"  ";
		cout<<endl;
	}
	cout<<"**********************************************\n";
}

