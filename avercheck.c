#include <stdio.h>
#define MAX 100
int main(void)
{
    int n;
    scanf("%d", &n);
    int m, sc;
    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &m);
	int scores[m];
        for (int j = 0; j < m; j++) {
            scanf("%d", &sc);
            scores[j] = sc;
            sum += sc;
        }
        for (int j = 0; j < m; j++) {
            if ((double) sum / m  < scores[j]) {
                count++;
            }
        }
        printf("%.3lf\n", (double) count / m * 100);
        sum = 0;
	count = 0;
    }
    return 0;
}
