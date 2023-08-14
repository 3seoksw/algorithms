#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int N;
    cin >> N;
    int count = 0;

    if (N % 5 == 0) {
        count = N / 5;
    }
    else {
        for (int i = N / 5; i >= 0; i--) {
            if ((N - 5 * i) % 3 == 0) {
                count = 0;
                count += i;
                N -= i * 5;
                count += N / 3;
                break;
            }
            else
                count = -1;
        }
    }
    cout << count << '\n';
    return 0;
}
