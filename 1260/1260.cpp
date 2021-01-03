#include <iostream>
#include <stack>
#include <queue>
using namespace std;
int N, M, V;
int dfs_visited[1005];
int bfs_visited[1005];
int graph[1005][1005];

void dfs(int num) {
	stack<int> s;
	s.push(num);
	dfs_visited[num] = 1;
	cout << num << ' ';
	while (!s.empty()){
		int cur = s.top();
		bool can_go = false;
		for (int i = 1; i <= N; i++) {
			if (!dfs_visited[i] && graph[cur][i]) {
				dfs_visited[i] = 1;
				can_go = true;
				s.push(i);
				cout << i << ' ';
				break;
			}
		}
		if (!can_go) {
			s.pop();
		}
	}
}
void bfs(int num) {
	queue<int> q;
	q.push(num);
	bfs_visited[num] = 1;
	while (!q.empty()) {
		int cur = q.front();
		cout << cur << ' ';
		q.pop();
		for (int i = 1; i <= N; i++) {
			if (!bfs_visited[i] && graph[cur][i]) {
				bfs_visited[i] = 1;
				q.push(i);
			}
		}
	}
}
int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> N >> M >> V;
	for (int i = 0; i < M; i++) {
		int n1, n2;
		cin >> n1 >> n2;
		graph[n1][n2] = 1;
		graph[n2][n1] = 1;
	}
	dfs(V);
	cout << '\n';
	bfs(V);
}