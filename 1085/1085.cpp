#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int x, y, w, h, tmp1, tmp2;
	cin >> x >> y >> w >> h;
	tmp1 = min(x, y);
	tmp2 = min(w - x, h - y);
	cout << min(tmp1, tmp2);
}