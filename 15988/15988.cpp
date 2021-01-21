#include <iostream>
using namespace std;
unsigned long long target, way[1000005];

unsigned long long findWay(unsigned long long num) {
	if (num == 1) return way[num]=1;
	if (num == 2) return way[num]=2;
	if (num == 3) return way[num]=4;
	if (way[num] != 0) {
		return way[num];
	}
	return way[num] = ((findWay(num-1)+findWay(num-2)+findWay(num-3))%1000000009);
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> target;
		cout<<findWay(target)<<'\n';
	}
}