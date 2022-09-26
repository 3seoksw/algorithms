#include <stdio.h>
#include <string.h>

char arr[20000][51];

int lenComp(const void* a, const void* b)
{
    const char* i = (char*) a;
    const char* j = (char*) b;
    int lenI = (int) strlen(i);
    int lenJ = (int) strlen(j);
    if (lenI == lenJ) {
        return strcmp(i, j);
    }
    else if (lenI > lenJ)
	return 1;
    else
	return -1;
}

int main(void)
{
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%s", arr[i]);
    }
    qsort(arr, N, sizeof(char) * 51, lenComp);
    for (int i = 0; i < N; i++) {
        printf("%s\n", arr[i]);
    }
    return 0;
}
