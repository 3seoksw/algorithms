#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int matrix[1024][1024];
int ans = 0;

int findSecNum(int x, int y)
{
	int temp[4] = {matrix[x][y], matrix[x + 1][y], matrix[x][y + 1], matrix[x + 1][y + 1]};

	sort(temp, temp + 4);

	return ans = temp[2];
}

void divide(int x, int y, int N)
{
	int times = N / 2;

	for (int i = 0; i < times; i++) {
		for (int j = 0; j < times; j++) {
			matrix[i][j] = findSecNum(x + 2 * i, y + 2 * j);
		}
	}
}
void pooling(int x, int y, int N)
{
	if (N == 2) {
		findSecNum(x, y);
		return;
	}

	for (int i = 0; i < log2(N); i++) {
		divide(x, y, N / pow(2, i));
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
	
	pooling(0, 0, N);
	cout << ans << "\n";

	return 0;
}
