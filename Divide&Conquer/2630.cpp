#include <iostream>
#include <algorithm>
using namespace std;

int matrix[128][128];
int ans[2] = {0, }; // [0]: white, [1]: blue

bool checkPaper(int x, int y, int N)
{
	int num = matrix[x][y];

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (num != matrix[i + x][j + y]) {
				return false;
			}
		}
	}
	return true;
}

void cutPaper(int x, int y, int N) 
{
	if (checkPaper(x, y, N)) {
		ans[matrix[x][y]]++;	
		return;
	}

	int newN = N / 2;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
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

	for (int i = 0; i < 2; i++) {
		cout << ans[i] << "\n";
	}
	return 0;
}
