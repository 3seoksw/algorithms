#include <iostream>
#include <string>
using namespace std;

int stackArr[10001];
int topIdx = -1;

int stackPush(int X)
{
    topIdx++;
    stackArr[topIdx] = X;
    return stackArr[topIdx - 1];
}

int stackPop()
{
    if (topIdx == -1) {
        cout << -1 << '\n';
        return -1;
    }

    int popped;
    popped = stackArr[topIdx];
    cout << popped << '\n';
    topIdx--;
    return stackArr[topIdx];
}

int stackSize()
{
    cout << topIdx + 1 << '\n';
    return topIdx + 1;
}

int stackEmpty()
{
    if (topIdx == -1) {
        cout << 1 << '\n';
        return 1;
    }
    else {
        cout << 0 << '\n';
        return 0;
    }
}

int stackTop() 
{
    if (topIdx == -1) {
        cout << -1 << '\n';
        return -1;
    }
    cout << stackArr[topIdx] << '\n';
    return stackArr[topIdx];
}

int main(void)
{
    int N, X;
    string inst;

    cin >> N;

    for (int i = 0; i < N; i++) {
       cin >> inst;
       if (inst == "push") {
           cin >> X;
           stackPush(X);
       }
       else if (inst == "pop") {
           stackPop();
       }
       else if (inst == "size") {
           stackSize();
       }
       else if (inst == "empty") {
           stackEmpty();
       }
       else if (inst == "top") {
           stackTop();
       }
    }
    return 0;
}
