#include <stdio.h>

int main(void)
{
    int N, M, i, j;
    int bCount = 0;
    int wCount = 0;
    scanf("%d %d", &N, &M);
    char board[N][M];
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            scanf("%c", &board[i][j]);
            if (board[i][j] == 'B')
                bCount++;
            else
                wCount++;
        }
    }
    if (bCount == wCount)
        printf("%d\n", 0);
    else if (bCount > wCount)
        printf("%d\n", (N * M) / 2 - wCount);
    else
        printf("%d\n", (N * M) / 2 - bCount);
   
    printf("B: %d\nW: %d\n", bCount, wCount);
    return 0;
}
