#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int chess[6] = {1, 1, 2, 2, 2, 8};
    int num; 
    for (int i = 0; i < 6; i++) {
        cin >> num;
        cout << chess[i] - num << ' ';  
    }
    cout << '\n';

    return 0;
}
