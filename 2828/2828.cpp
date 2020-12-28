#include <iostream>
#include <utility>
using namespace std;
int main() {
	int N, M, J, apple,move=0;
	cin >> N >> M;
	pair<int, int> basket;
	cin >> J;
	basket.first = 1;
	basket.second = M;
	for (int i = 0; i < J; i++) {
		cin >> apple;
		if (apple > basket.second) {
			//cout << apple - basket.second << " 만큼 이동\n";
			move += (apple - basket.second);
			basket.first = apple - M+1;
			basket.second = apple;
		}
		else if (apple<basket.first) {
			//cout << basket.first - apple << " 만큼 이동\n";
			move += (basket.first - apple);
			basket.first = apple;
			basket.second = apple + M - 1;
		}
	}
	cout << move;
}