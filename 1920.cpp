#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int N;
int arr[100000];

int binarySearch(int key)
{
    int start = 0;
    int end = N - 1;
    int mid;
    while (start <= end) {
        mid = (start + end) / 2;
        if (arr[mid] == key) {
            cout << "1\n";
            return 1;
        }
        else if (arr[mid] > key) {
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    cout << "0\n";
    return 0;
}
int main(void)
{
    int i;
    cin >> N;
    for (i = 0; i < N; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + N);

    int M;
    cin >> M;
    int num, result;
    for (i = 0; i < M; i++) {
        cin >> num;
        result = binarySearch(num);
        cout << result << "\n";
    }
    return 0;
}
