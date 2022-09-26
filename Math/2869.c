#include <stdio.h>

int main(void)
{
    int a, b, v;
    int days;
    scanf("%d %d %d", &a, &b, &v);
    if ((v % (a - b)) == 0) {
        printf("%d\n", (v / (a - b)));
    }
    else {
        printf("%d\n", (v / (a - b)) + 1);
    }
    return 0;
}
