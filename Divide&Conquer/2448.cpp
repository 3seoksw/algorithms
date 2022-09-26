#include <iostream>
using namespace std;

// 3 : 5 = 24 : 48
char matrix[3072][3072];

void initMatrix(int N)
{
	int newN = N * 5 / 3;
	for (int i = 0; i < newN; i++) {
		for (int j = 0; j < newN; j++) {
			matrix[i][j] = ' ';
		}
	}	
	return;
}

void buildStars(int x, int y, int N)
{
	if (N == 3) {
		int mid = (x + y) / 2;
		matrix[x][y + mid] = '*';
		matrix[x + 1][y + mid - 1] = '*';
		matrix[x + 1][y + mid + 1] = '*';
		for (int i = 0; i < 5; i++) {
			matrix[x + 2][y + mid - (i - 2)] = '*';
		}

	}
}

void printStars(int N)
{
	int newN = N * 5 / 3;
	for (int i = 0; i < newN; i++) {
		for (int j = 0; j < newN * 5 / 3; i++) {
			cout << matrix[i][j];
		}
		cout << "\n";
	}
}

int main(void)
{
	int N;
	cin >> N;

	initMatrix(N);
	buildStars(0, 0, N);
	printStars(N);
	return 0;
}
