#include <iostream>
#include <utility>
#include <queue>
using namespace std;

int N, K;
queue<pair<int, int>> q; //수빈이의 현재 위치와 걸린 시간
pair<int, int> cur;
int visited[100005];

void bfs(int subin) {
	q.push({ subin,0 });
	while (!q.empty()) {
		cur = q.front();
		//cout << "수빈이의 위치 = " << cur.first << " 걸린 시간 = " << cur.second << '\n';
		q.pop();
		if (cur.first == K) {
			cout << cur.second;
			return ;
		}
		else if (cur.first > K) {
			if (visited[cur.first - 1] == 0) {
				visited[cur.first - 1] = 1;
				q.push({ cur.first - 1,cur.second + 1 });
			}
			
		}
		else {
			if (cur.first > 0) {
				if (visited[cur.first - 1] == 0) {
					visited[cur.first - 1] = 1;
					q.push({ cur.first - 1,cur.second + 1 });
				}
			}
			if (visited[cur.first + 1] == 0) {
				visited[cur.first + 1] = 1;
				q.push({ cur.first + 1,cur.second + 1 });
			}
			if (cur.first * 2 <= 100000) {
				if (visited[cur.first * 2] == 0) {
					visited[cur.first * 2] = 1;
					q.push({ cur.first * 2 ,cur.second + 1 });
				}
			}
			
		}
	}
	return ;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> N >> K;
	bfs(N);
}