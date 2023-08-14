#include <stdio.h>

int selfNum[10000] = {0, };
int idx = 0;

int selfNumCheck(int n)
{
    int sum = n;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(void)
{
    int n;
    for (int i = 1; i <= 10000; i++) {
        n = selfNumCheck(i);
        selfNum[n] = 1;
    }
    for (int i = 0; i < 10000; i++) {
        if (!selfNum[i])
            printf("%d\n", i);
    }
    return 0;
}
