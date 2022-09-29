#include <iostream>
using namespace std;

long long N, B;
long long matrix[5][5];
long long temp[5][5];
long long result[5][5];

void multiMatrix(long long arr1[5][5], long long arr2[5][5])
{
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			temp[i][j] = 0;
			for (int k = 0; k < N; k++) {
				temp[i][j] += arr1[i][k] * arr2[k][j];
			}
			temp[i][j] %= 1000;
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			arr1[i][j] = temp[i][j];
		}
	}
}

void printMatrix(int N)
{
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << result[i][j] << " ";
		}
		cout << endl;
	}
}

int main(void)
{
	cin >> N >> B;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> matrix[i][j];
		}
		result[i][i] = 1;
	}

	while (B > 0) {
		if (B % 2 == 1) {
			multiMatrix(result, matrix);
		}
		multiMatrix(matrix, matrix);
		B /= 2;
	}
	printMatrix(N);

	return 0;
}
