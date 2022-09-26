#include <iostream>
#include <algorithm>
using namespace std;

int matrix[2200][2200];
int negOne = 0;
int zero = 0;
int posOne = 0;

bool checkNums(int x, int y, int N)
{
	int num = matrix[x][y];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (num != matrix[i + x][j + y])
				return false;
		}
	}
	return true;
}

void cutPaper(int x, int y, int N)
{
	if (checkNums(x, y, N)) {
		switch(matrix[x][y]) {
			case -1:
				negOne++;
				break;
			case 0:
				zero++;
				break;
			case 1:
				posOne++;
				break;
			default:
				break;
		}
		return;
	}	

	int newN = N / 3;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cutPaper(x + i * newN, y + j * newN, newN);
		}
	}
}

int main(void)
{
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> matrix[i][j]; 
		}
	}

	cutPaper(0, 0, N);
	
	cout << negOne << "\n";
	cout << zero << "\n";
	cout << posOne << "\n";

	return 0;
}
