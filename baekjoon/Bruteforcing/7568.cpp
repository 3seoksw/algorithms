#include <iostream>
#include <algorithm>
using namespace std;

typedef struct _volume {
    int weight;
    int height;
    int ranking;
} Volume;

int main(void)
{
    int N, i, j;
    Volume arr[N];
    cin >> N;
    for (i = 0; i < N; i++) {
        cin >> arr[i].weight >> arr[i].height; 
    }

    for (i = 0; i < N; i++) {
        arr[i].ranking = 1;
    }

    for (i = 0; i < N; i++) {
        if (arr[i].weight < arr[i + 1].weight) {
            arr[i].ranking++;
        } 
    }
}
