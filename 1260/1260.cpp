#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
int N, M, V, ver,edge, temp;
bool d_visited[1005], b_visited[1005];
vector<int> graph[1005];
queue<int> q;

void dfs(int num) {
	d_visited[num] = true;
	cout << num << ' ';
	for (int nxt : graph[num]) { //범위기반 for문
		if (d_visited[nxt]) continue;
		dfs(nxt);
	}
}

void bfs(int num) {
	q.push(num);
	b_visited[num] = true;
	while (!q.empty()) {
		temp = q.front();
		q.pop();
		cout <<temp<<' ';
		for (int nxt : graph[temp]) { //범위기반 for문
			if (b_visited[nxt]) continue;
			q.push(nxt);
			b_visited[nxt]=true;
		}
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> N >> M >> V;
	for (int i = 0; i < M; i++) {
		cin >> ver >> edge;
		graph[ver].emplace_back(edge);
		graph[edge].emplace_back(ver);
	}
	for (int i = 1; i <= N; i++) {
		sort(graph[i].begin(), graph[i].end());
	}
	dfs(V);
	cout << '\n';
	bfs(V);
}