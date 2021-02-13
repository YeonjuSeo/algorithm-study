#include <iostream>
#include <vector>
#include <queue>
using namespace std;
const long long MAX = 20205, INF = 1e18;

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	long long V, E, K, u, v, w, far[MAX];
	vector<pair<long long, long long>> vec[MAX];
	//작은 값의 우선 순위가 높은 우선순위큐 생성
	priority_queue <pair<long long, long long>, vector<pair<long long, long long>>, greater<>> pq;

	cin >> V >> E>> K;
	for (int i = 0; i < E; i++) {
		cin >> u >> v >> w;
		//벡터의 u번째 위치에 도착 정점과 가중치 쌍을 입력
		vec[u].push_back({ v,w }); 
	}
	//가장 큰 수로 초기화
	fill(far, far + V + 1, INF);
	//첫번째 정점에서의 최단 경로값은 0이다.
	far[K] = 0;
	pq.push({ 0,K });
	while (!pq.empty()) {
		pair<long long, long long> cur = pq.top();
		pq.pop();
		if (far[cur.second] < cur.first) continue;
		for (auto nxt : vec[cur.second]) {
			if (far[nxt.first] <= cur.first + nxt.second) {
				continue;
			}
			far[nxt.first] = cur.first + nxt.second;
			pq.push({ far[nxt.first],nxt.first });
		}
	}
	for (int i = 1; i <= V; i++) {
		if (far[i] == INF) cout << "INF" << '\n';
		else cout << far[i] << '\n';
	}
}
