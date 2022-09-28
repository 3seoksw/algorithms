#include <iostream>
using namespace std;

int matrix[5][5];

int main(void)
{
	int N, B;
	cin >> N >> B;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> matrix[i][j];
		}
	}
	return 0;
}
