#include <iostream>
#include <string>
using namespace std;

int matrix[64][64];

bool check(int x, int y, int N)
{
	int num = matrix[x][y];

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (num != matrix[x + i][y + j]) {
				return false;
			}
		}
	}
	return true;
}

void quadTree(int x, int y, int N)
{
	if (check(x, y, N)) {
		cout << matrix[x][y];
		return;
	}	

	int newN = N / 2;

	cout << "(";
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			quadTree(x + i * newN, y + j * newN, newN);
		}
	}
	cout << ")";
}

int main(void)
{
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		for (int j = 0; j < str.length(); j++) {
			matrix[i][j] = str[j] - '0';
		}
	}

	quadTree(0, 0, N);
	cout << "\n";

	return 0;
}
