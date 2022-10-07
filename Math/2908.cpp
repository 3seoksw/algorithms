#include <iostream>
#include <string>
using namespace std;

int convertNum(int N)
{
	int hundreds = N / 100;
	int tens = (N - (hundreds * 100)) / 10;
	int ones = N - hundreds * 100 - tens * 10;
	return (ones * 100 + tens * 10 + hundreds);
}

int main(void)
{
	int A, B;
	cin >> A >> B;

	int newA, newB;
	newA = convertNum(A);
	newB = convertNum(B);

	if (newA > newB) {
		cout << newA << endl;
	}
	else {
		cout << newB << endl;
	}
	return 0;
}
