#include <iostream>
#include <algorithm>
using namespace std;

int cases[1000001];

int main(void)
{
    int N;
    cin >> N;

    cases[0] = 0;
    cases[1] = 0;
    cases[2] = 1;
    cases[3] = 1;

    for (int i = 4; i <= N + 1; i++) {
        cases[i] = cases[i - 1] + 1; // case where subtracts 1
        if (i % 2 == 0) {
            if (cases[i / 2] + 1 < cases[i]) {
                cases[i] = cases[i / 2] + 1;
            }
        }
        if (i % 3 == 0) {
            if (cases[i / 3] + 1 < cases[i]) {
                cases[i] = cases[i / 3] + 1;
            }
        }
    }
    cout << cases[N] << '\n';
    return 0;
}
