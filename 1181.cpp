#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int lenComp(const void* a, const void* b)
{
    const char* i = (char*) a;
    const char* j = (char*) b;
    int lenI = (int) strlen(i);
    int lenJ = (int) strlen(j);
    if (lenI == lenJ) {
        return strcmp(i, j);
    }
    return (int) strlen(i) - (int) strlen(j);
}

int main(void)
{
    int N;
    cin >> N;
    char* arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    qsort(arr, N, sizeof(char) * 50, lenComp);
    for (int i = 0; i < N; i++) {
        printf("%s\n", arr[i]);
    }
    return 0;
}
