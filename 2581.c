#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    int n, count;
    int primes[b - a];
    int sum = 0;
    int i = 0;
    for (n = a; n <= b; n++) {
        count = 0;
        for (int k = 1; k <= n; k++) {
            if (n % k == 0)
                count++;
            if (count > 2) 
                break;
        }
        if (count == 2) {
            sum += n;
            primes[i] = n;
            i++;
        }
    }
    printf("%d\n%d\n", sum, primes[0]);
    return 0;
}
