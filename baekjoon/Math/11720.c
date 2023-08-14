#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int num;
    scanf("%d", &num);
    for (int i = 0; i < n; i++) {
        arr[i] = num % 10;
        num = (num - num % 10) / 10;
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
	printf("%d ", arr[i]);
        sum += arr[i];
    }
    printf("%d\n", sum);
    return 0;
}
