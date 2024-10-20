#include <stdio.h>
#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

vector<vector<int>> ForwardThreeLoops(vector<vector<int>> mat) {

	int matSize = mat.size();

	for (size_t column = 0; column < matSize; column++)
	{
		int pivot = mat[column][column];

		for (size_t i = column; i < matSize + 1; i++)
		{
			mat[column][i] /=  pivot;
		}

		for (size_t row = column + 1; row < matSize; row++)
		{
			int subPivot = mat[row][column];

			for (size_t something = column; something < matSize; something++)
			{
				mat[row][something] = mat[row][column] - subPivot * mat[column][something];
			}
		}
	}

	return mat;

}

int main() {

	vector<vector<int>> mat(5, vector<int>(6));

	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 6; j++)
		{
			mat[i][j] = (rand() % 10) + 1;
		}
	}

	printf("Before : \n");

	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 6; j++)
		{
			printf("%d",mat[i][j]);
		}
		printf("\n");
	}

	ForwardThreeLoops(mat);

	printf("After : \n");

	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 6; j++)
		{
			printf("%d", mat[i][j]);
		}
		printf("\n");
	}
}

