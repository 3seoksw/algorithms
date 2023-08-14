#include <iostream>
#include <algorithm>
using namespace std;

typedef struct _Node{
    int key;
    _Node* link;
} Node;

typedef struct _Network {
    int n; // number of vertices
    Node* adjList;
} Network;

int main(void)
{
    int v;
    int e;
    cin >> v;
    cin >> e;
    Network net;
    net.n = v;
    int a, b;
    for (int i = 0; i < e; i++) {
        cin >> a;
        cin >> b;
    }
    return 0;
}
