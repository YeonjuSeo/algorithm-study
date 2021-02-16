//문제 출력 방식을 이해하는 것부터 쉽지 않았다.
#include <iostream>
#include <vector>
using namespace std;
int INF = 1e9;
int n, m, a, b, c, route[105][105], far[105][105];
vector<int>v;

void findRoute(int start, int end) {
	if (route[start][end] == 0) {
		v.push_back(start);
		v.push_back(end);
		return;
	}
	findRoute(start, route[start][end]); //시작점과 중간 경유지점
	v.pop_back(); //중간 경유 지점이 중복되므로 하나 빼준다.
	findRoute(route[start][end], end); //경유지점과 끝점
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	//전체 초기화
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == j) continue;
			far[i][j] = INF;
		}
	}
	//연결된 도시를 바로 가는 데 드는 비용을 입력
	for (int i = 0; i < m; i++) {
		cin >> a >> b >> c;
		far[a][b] = min(far[a][b], c);
	}
	for (int i = 1; i <= n; i++) { //경유할 지점
		for (int j = 1; j <= n; j++) { //출발 지점
			for (int k = 1; k <= n; k++) { //도착 지점
				//곧장 가는 것보다 경유해서 가는 것이 더 비용이 적게 든다면 갱신
				if (far[j][k] > far[j][i] + far[i][k]) {
					far[j][k] = far[j][i] + far[i][k]; 
					route[j][k] = i; //경유 지점 기록
				}
			}
		}
	}
	//i번째 도시에서 j번째 도시로 가는 최소 비용 출력
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (far[i][j] == INF) {
				cout << "0 ";
			}
			else {
				cout << far[i][j] << ' ';
			}
		}
		cout << '\n';
	}
	//i번째 도시에서 j번째 도시로 가는 최적 경로 출력
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (far[i][j] == 0) cout << "0\n";
			else{
				findRoute(i, j);
				cout << v.size() << ' ';
				for (int k = 0; k < v.size(); k++) {
					cout << v[k] << ' ';
				}
				cout << "\n";
				v.clear();
			}

		}
	}
}
