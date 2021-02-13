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

	//첫번째 정점까지의 최단 경로값은 0이다.
	far[K] = 0;
	//우선순위큐에 최단 경로값과 정점 번호 쌍을 입력
	pq.push({ 0,K });

	while (!pq.empty()) {
		pair<long long, long long> cur = pq.top();
		pq.pop();

		//현재 정점까지의 최단 경로값이 현재 경로의 경로값보다 작다면 갱신하지 않는다. 
		if (far[cur.second] < cur.first) continue;
		//현재 정점에서 갈 수 있는 도착 정점과 가중치 쌍을 탐색한다.
		for (auto nxt : vec[cur.second]) {
			//갈 수 있는 정점까지의 최단 경로가
			//현재 경로의 경로값에 다음 경로까지 가는 가중치의 합보다
			//즉, 현재 경로로 해당 도착 지점까지 가는 경로의 최단거리 경로값보다 작다면 갱신하지 않는다.
			if (far[nxt.first] <= cur.first + nxt.second) {
				continue;
			}
			//다음 도착 정점까지의 최단 경로값을 지금까지의 경로값에 다음 경로로 가는 가중치를 더한 값으로 설정한다
			far[nxt.first] = cur.first + nxt.second;
			//우선순위큐에 다음 도착 정점까지의 최단 경로값과 해당 정점 번호 쌍을 입력한다.
			pq.push({ far[nxt.first],nxt.first });
		}
	}
	for (int i = 1; i <= V; i++) {
		//갱신되지 못한 값은 INF를 출력한다
		if (far[i] == INF) cout << "INF" << '\n';
		else cout << far[i] << '\n';
	}
}
