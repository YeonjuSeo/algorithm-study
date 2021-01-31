#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int T,N, M, value, imp[105], midx, turn=0, cur_idx, cur_v;
	
	cin >> T;
	for (int i = 0; i < T; i++) {
		queue<pair<int, int>>q;
		turn = 0;
		cin >> N >> M;
		for (int j = 0; j < N; j++) {
			cin >> value;
			imp[j]=value;
			q.push(pair<int, int>(j, value));
		}
		sort(imp, imp + N); midx = N-1;
		while (!q.empty()) {
			cur_idx = q.front().first; cur_v = q.front().second;
			//cout << "현재 최대 가치 = " << imp[midx] << '\n';
			//cout << "현재 문서의 원 목차 = " << cur_idx << " 현재 문서의 중요도 = " << cur_v<<'\n';
			if (cur_v < imp[midx]) {
				q.pop();
				q.push(pair<int, int>(cur_idx, cur_v));
			}
			else if (cur_v == imp[midx]) {
				turn++;
				//cout << cur_idx << "번째에 있던 문서가 " << turn << "번째로 출력됨\n";
				if (cur_idx == M) {
					cout << turn << '\n';
					break;
				}
				else {
					midx--;
					q.pop();
				}
			}
		}
	}
}