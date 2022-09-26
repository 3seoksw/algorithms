#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int N;
    cin >> N;
    int count = 0;

    if (N <= 99) {
        count = N;
        cout << count << '\n';
        return 0;
    }
    else {
        count = 99;
        int hundreds, tens, ones; // 1000은 한수가 아니므로 생략
        for (int i = 100; i <= N; i++) {
            hundreds = i / 100;
            tens = (i - (hundreds * 100)) / 10;
            ones = (i - (hundreds * 100) - (tens * 10));
            if (hundreds - tens == tens - ones)
                count++;
        }
    }

    cout << count << '\n';
   
    return 0;
}
