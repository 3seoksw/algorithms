#include <stdio.h>

int main(void)
{
    int mod[42] = {0, };
    int n;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &n);
        mod[n % 42]++;
    }
    int count = 0;
    for (int i = 0; i < 42; i++) {
        if (mod[i] > 0)
            count++;
    }
    printf("%d\n", count);
    return 0;
}
