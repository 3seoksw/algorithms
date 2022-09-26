#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int X, N, a, b;
    int total = 0;
    cin >> X;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> a >> b;
        total += a * b;
    }

    if (total == X) 
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}
