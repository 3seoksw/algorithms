#include <stdio.h>

int num[123456 * 2 + 1] = {0, };

void checkPrimes()
{
    for (int i = 2; i <= 123456 * 2 + 1; i++) {
        num[i] = i;
    }
    
    for (int i = 2; i * i <= 123456 * 2 + 1; i++) {
        if (num[i] == 0)
            continue;
        for (int j = i * i; j <= 123456 * 2 + 1; j += i) {
            num[j] = 0;
        }
    }
}

int main(void)
{
    checkPrimes();
    int n, count;
    while (1) {
        count = 0;
        scanf("%d", &n);
        if (n == 0)
            break;
        for (int j = n + 1; j <= 2 * n; j++) {
            if (num[j])
                count++;
        }
        printf("%d\n", count);
    }
    return 0;
}
