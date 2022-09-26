#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int scores[n];
    for (int k = 0; k < n; k++) scores[k] = 0;
    int inc, score, i;
    for (int k = 0; k < n; k++) {
        char str[100];
        scanf("%s", str);
        inc = 0; score = 0; i = 0;
        while (str[i] != '\0') {
            if (str[i] == 'O') {
                inc++;
                score += inc;
            }
            else if (str[i] == 'X') {
                inc = 0;
                // score += inc;
            }
            else {
                break;
            }
	    i++;
        }
        scores[k] = score;
    }
    for (int k = 0; k < n; k++) printf("%d\n", scores[k]);
    return 0;
}
