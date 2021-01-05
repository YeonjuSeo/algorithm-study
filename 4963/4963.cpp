#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
int w, h, map[55][55],cnt=0,bfs_visited[55][55];
int dir_w[8] = {0,0,-1,1,1,1,-1,-1};
int dir_h[8] = {1,-1,0,0,1,-1,-1,1};

void bfs(int height,int width) {
	queue<pair<int, int>> q;
	q.push(make_pair(height,width));
	bfs_visited[height][width] = 1;
	while (!q.empty()) {
		int cur_h = q.front().first;
		int cur_w = q.front().second;
		q.pop();
		for (int i = 0; i < 8; i++) {
			int nxt_h = cur_h + dir_h[i];
			int nxt_w = cur_w + dir_w[i];
			if (nxt_w >= 0 && nxt_w <= 50 && nxt_h >= 0 && nxt_h <= 50) {
				if (map[nxt_h][nxt_w] == 1 && !bfs_visited[nxt_h][nxt_w]) {
					bfs_visited[nxt_h][nxt_w] = 1;
					q.push(make_pair(nxt_h,nxt_w));
				}
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	while (1) {
		cin >> w >> h;
		if (w == 0 && h == 0) break;
		cnt = 0;
		//map[55][55]={0}가 아닌 memset으로 제대로 초기화
		memset(map, 0, sizeof(map));
		memset(bfs_visited, 0, sizeof(bfs_visited));
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> map[i][j];
			}
		}
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (!bfs_visited[i][j] && map[i][j]) {
					cnt++;
					bfs(i, j);
				}
			}
		}
		cout << cnt<<'\n';
	}
}
//https://jdselectron.tistory.com/53