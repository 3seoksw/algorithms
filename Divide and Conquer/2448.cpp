#include <iostream>
using namespace std;

// 3 : 5 = 24 : 48
char matrix[3072][3072];

void initMatrix(int N)
{
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 2 * N - 1; j++) {
			matrix[i][j] = ' ';
		}
	}	
	return;
}

void buildStars(int x, int y)
{
	matrix[x][y] = '*';

	matrix[x + 1][y - 1] = '*';
	matrix[x + 1][y + 1] = '*';

	for (int i = 0; i < 5; i++) {
		matrix[x + 2][y + i - 2] = '*';
	}
}

void buildMatrix(int x, int y, int N)
{
	if (N == 3) {
		buildStars(x, y);
		return;
	}

	buildMatrix(x, y, N / 2);
	buildMatrix(x + N / 2, y - N / 2, N / 2);
	buildMatrix(x + N / 2, y + N / 2, N / 2);
}

void printStars(int N)
{
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 2 * N - 1; j++) {
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
	buildMatrix(0, N - 1, N);
	printStars(N);
	return 0;
}
