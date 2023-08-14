#include <stdio.h>
#define MAX 1000

int main(void)
{
    int n;
    scanf("%d", &n);
    int count = 0;
    int arr[MAX];
    int idx = 0;
    int i, h, t, d;
    if (n <= 99) {
        count = n;
        printf("%d\n", count);
        return 0;
    }
    else {
        count = 99;
        for (i = 100; i <= n; i++) {
            h = i / 100;
            t = (i - (h * 100)) / 10;
            d = (i - (h * 100) - (t * 10));
           if (h - t == t - d)
               count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
