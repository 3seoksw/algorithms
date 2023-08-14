#include <stdio.h>
#include <stdlib.h>

int comp(const void* a, const void* b)
{
    const int* i = (int*) a;
    const int* j = (int*) b;
    return *i - *j;
}

int main(void)
{
    int N, i;
    scanf("%d", &N);
    int A[N];
    for (i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    qsort(A, N, sizeof(int), comp);
    int M, num;
    int* item;
    scanf("%d", &M);
    int mArr[M];
    for (i = 0; i < M; i++) {
        scanf("%d", &mArr[i]);
    }
    for (i = 0; i < M; i++) {
    item = (int*) bsearch(&mArr[i], A, N, sizeof(int), comp);
    if (item != NULL)
        printf("%d\n", 1);
    else
        printf("%d\n", 0);
    }

    return 0;
}
