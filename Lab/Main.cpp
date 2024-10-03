#include <iostream>

using namespace std;

int main() {

	return 0;
}

void Gauss(int mat[], int n, int m) {

	int churro;

	for(int i = n, i < 1 step - 1,i++){

		churro = 0;

		for(int j = i + 1, j < n step 1, j++){
			churro = churro + A(i, j).X(j);
		}
	}

}


			//for column = 1 to n - 1

			//	for row = column + 1 to n

			//		for something = 1 to n + 1
			//			A(r, s) = A(c, c)(pivot).A(r, s) - A(r, c)(sub pivot).A(c, s)



			//			for column = 1 to n - 1
			//				pivot = A(c, c)

			//				for row = column + 1 to n
			//					subpivot = A(row, column)
			//					A(r, s) = A(c, c)(pivot).A(r, s) - A(r, c)(sub pivot).A(c, s)

