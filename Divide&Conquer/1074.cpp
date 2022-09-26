#include <iostream>
#include <algorithm>
using namespace std;

int ans = 0;
int N, c, r;

void visit(int row, int col, int n)
{
	if (r == row && c == col) {
		cout << ans << "\n";
		return;
	}

	if (r < row + n && r >= row && c < col + n && c >= col) {
		visit(row, col, n / 2);
		visit(row, col + n / 2, n / 2);
		visit(row + n / 2, col, n / 2);
		visit(row + n / 2, col + n / 2, n / 2);
	}
	else {
		ans += n * n;
	}
}

int main(void)
{
	cin >> N >> r >> c;

	visit(0, 0, (1 << N));

	return 0;
}
