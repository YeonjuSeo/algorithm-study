#include <iostream>
#include <queue>
using namespace std;
int N, M,cnt=0, graph[1005][1005], bfs_visited[1005];
queue<int> q;
void bfs(int j) {
	q.push(j);
	bfs_visited[j] = 1;
	while (!q.empty()) {
		int cur = q.front();
		q.pop();
		for (int i = 1; i <= N; i++) {
			if (!bfs_visited[i] && graph[cur][i] == 1) {
				q.push(i);
				bfs_visited[i] = 1;
			}
		}
	}
}

int main() {	
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		int n1, n2;
		cin >> n1 >> n2;
		graph[n1][n2] = 1;
		graph[n2][n1] = 1;
	}
	for (int j = 1; j <= N; j++) {
		if (bfs_visited[j] == 0) {
			cnt++;
			bfs(j);
		}
	}
	cout << cnt;
}
//https://jdselectron.tistory.com/49