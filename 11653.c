#include <stdio.h>

int main(void)
{
    int n, count, i;
    scanf("%d", &n);
    while (n != 1) {
        for (i = 2; i <= n; i++) {
            count = 0;
            for (int j = 1; j <= i; j++) {
                if (i % j == 0)
                    count++;
                if (count > 2)
                    break;
            }
            while (count == 2 && n % i == 0) {
                printf("%d\n", i);
                n /= i;
            }
        }
    }
    return 0;
}
