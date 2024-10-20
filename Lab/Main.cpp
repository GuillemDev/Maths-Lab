#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int* ForwardElimination(int* mat, int size) {

	int n = size;

	for (int column = 1; column < n - 1; column++)
	{
		for (int row = column + 1; row < column - 1; row++)
		{
			for (int k = column; k < n + 1; k++)
			{
				mat[row,k] = mat[column,column] * mat[row,k] - mat[row,column] * mat[column, k];
			}
		}
	}

	return mat;
}



int main() {

	int* mat = {1,2,3,4,5,6,7,8,9};

	mat = ForwardElimination(mat,3);

	return 0;
}


//
//void Gauss(int mat[], int n, int m) {
//
//	int churro;
//
//	for(int i = n, i < 1 step - 1,i++){
//
//		churro = 0;
//
//		for(int j = i + 1, j < n step 1, j++){
//			churro = churro + A(i, j).X(j);
//		}
//	}
//
//}


			//for column = 1 to n - 1

			//	for row = column + 1 to n

			//		for something = 1 to n + 1
			//			A(r, s) = A(c, c)(pivot).A(r, s) - A(r, c)(sub pivot).A(c, s)



			//			for column = 1 to n - 1
			//				pivot = A(c, c)

			//				for row = column + 1 to n
			//					subpivot = A(row, column)
			//					A(r, s) = A(c, c)(pivot).A(r, s) - A(r, c)(sub pivot).A(c, s)

