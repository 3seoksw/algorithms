#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

vector<int> edges[10001];
queue<int> q;
bool visit[1001];

void initVisit()
{
	for (int i = 0; i < 1001; i++) {
		visit[i] = false;
	}
}

void DFS(int V)
{
	if (visit[V] == true) {
		return;
	}
	cout << V << " ";
	visit[V] = true;
	for (int i = 0; i < edges[V].size(); i++) {
		DFS(edges[V][i]);
	}
}

void BFS(int V) 
{
	int now, k, next;
	q.push(V);
	visit[V] = true;
	while (!q.empty()) {
		now = q.front();
		q.pop();
		cout << now << " ";
		for (int i = 0; i < edges[now].size(); i++) {
			next = edges[now][i];
			if (!visit[edges[now][i]]) {
				q.push(edges[now][i]);
				visit[edges[now][i]] = true;
			}
		}
	}
}

int main(void)
{ 
	int N, M, V;
	int u, v;
	cin >> N >> M >> V;

	for (int i = 0; i < M; i++) {
		cin >> u >> v;
		edges[u].push_back(v);
		edges[v].push_back(u);
	}
	for (int i = 0; i <= N; i++) {
		sort(edges[i].begin(), edges[i].end());
	}
	initVisit();	
	DFS(V);
	cout << endl;
	initVisit();
	BFS(V);
	cout << endl;

	return 0;
}
