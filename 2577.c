#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    int n[10] = {0, };
    int multi = a * b * c;
    
    while (multi > 0) {
        n[multi % 10]++;
        multi = (multi - (multi % 10)) / 10;
    }
    for (int i = 0; i < 10; i++) {
        printf("%d\n", n[i]);
    }
    return 0;
}
