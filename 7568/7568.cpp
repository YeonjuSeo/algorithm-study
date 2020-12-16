#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int N,x,y;
	int weight[50], height[50], rank[50];
	fill_n(rank, 50, 1); //배열 초기화 하는 방법
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		weight[i] = x;
		height[i] = y;
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (weight[i] < weight[j] && height[i] < height[j]) {
				rank[i]++;
			}
		}
		cout << rank[i] << ' ';
	}
}