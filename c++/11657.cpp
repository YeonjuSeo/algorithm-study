#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int N, M;
long long A, B, C, far[505];
bool n_cycle = false;
vector<pair<long long,long long>> v[505];
int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> N >> M;
	//인접 리스트 생성
	for (int i = 0; i < M; i++) {
		cin >> A >> B >> C;
		v[A].push_back({B,C});
	}
	for (int i = 2; i <= N; i++) {
		far[i] = 1e18;
	}
	for (int i = 1; i <= N; i++) {
		for (int start = 1; start <= N; start++) {
			//연결되지 않은 도시는 건너뛰기
			if (far[start] == 1e18) {
				continue;
			}
			//연결된 도시 탐색하기
			for (int j = 0; j < v[start].size(); j++) {
				int end = v[start][j].first;
				int cost = v[start][j].second;
				//더 작은 값으로 갱신하기
				if (far[end] > far[start] + cost) {
					//마지막 순서에서 값이 바뀌면 음의 사이클이 있다는 뜻이다.
					if (i == N) {
						n_cycle = true;
					}
					far[end] = far[start] + cost;
				}
			}
		}
	}
	if (n_cycle == true) {
		cout << "-1\n";
	}
	else {
		for (int i = 2; i <= N; i++) {
			if (far[i] == 1e18) {
				cout << "-1\n";
			}
			else {
				cout << far[i]<<"\n";
			}
		}
	}
}
