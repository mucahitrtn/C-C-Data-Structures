#include <iostream>

using namespace std;

const int x = 5;
const int y = 5;

void print(int matrix[][x]) {

	int B[x][y];

	for (int i = 0; i < x; i++) {

		for (int j = 0; j < y; j++) {

			B[i][j] = matrix[i][j];

		}

	}

	for (int i = 0; i < 5; i++) {

		for (int j = 0; j < 5; j++) {

			cout << B[i][j] << "\t";

		}

		cout << endl;

	}

	for (int i = 1; i < 5; i++) {

		int t = B[3][i];
		int j = i - 1;

		while (t < B[3][j] && j >= 0) {

			B[3][j + 1] = B[3][j];
			--j;

		}
		B[3][j + 1]=t;
	}

	cout << endl << endl;
	for (int i = 0; i < 5; i++) {

		for (int j = 0; j < 5; j++) {

			cout << B[i][j] << "\t";

		}

		cout << endl;

	}

}




int main()
{

	int A[5][5];
	int count = 1;
	for (int i = 0; i < 5; i++) {

		for (int j = 0; j < 5; j++) {

			A[j][i] = count;
			count++;

		}

	}

	A[3][0] = 18;
	A[3][1] = 12;
	A[3][2] = 26;
	A[3][3] = 36;
	A[3][4] = 5;

	print(A);

}

