#include <iostream>
using namespace std;

char moo[3] = { 'm', 'o', 'o' };
int len = 3;
int prevLen = 0;

void Moo(int N, int k) 
{
	if (N <= 3) {
		cout << moo[N - 1] << endl;
		return;
	}
	prevLen = len;
	len = len * 2 + k + 4;
	if (N > len) {
		Moo(N, k + 1);
	}
	else {
		if (N == prevLen + 1) {
			cout << 'm' << endl;
			return;
		}
		else if (N >= prevLen + 2 && N <= prevLen + k + 4) {
			cout << 'o' << endl;
			return;
		}
		else {
			len = 3;
			Moo(N - (prevLen + k + 4), 0);
		}
	}
}

int main(void)
{
	int N;
	cin >> N;

	Moo(N, 0);

	return 0;
}
