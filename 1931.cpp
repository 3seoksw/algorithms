#include <iostream>
#include <algorithm>
using namespace std;

typedef struct _Meeting {
    int start;
    int end;
    int time;
} Meeting;

int main(void)
{
    int N;
    cin >> N;
    Meeting meetings[N];

    for (int i = 0; i < N; i++) {
        cin >> meetings[i].start >> meetings[i].end;
        meetings[i].time = meetings[i].end - meetings[i].start;
    }

    cout << meetings[0].time << '\n';
    return 0;
}
