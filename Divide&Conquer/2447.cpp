#include <iostream>
using namespace std;

char matrix[2200][2200]; 
// store stars and print out stars in order

void initMatrix(int N)
{
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			matrix[i][j] = ' ';
		}	
	}
}
void storeStar(int x, int y, int N)
{
	if (N == 3) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (i == 1 && j == 1) {
				continue;
				}
				matrix[x + i][y + j] = '*';
			}
		}
		return;
	}

	int newN = N / 3;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == 1 && j == 1) {
				continue;
			}
			storeStar(x + i * newN, y + j * newN, newN);
		}
	}
}

void printStar(int N)
{
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
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
	storeStar(0, 0, N);
	printStar(N);

	return 0;
}
