#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int X, Y, M, max, p, plus = 0, minus = 0;
	int damage[100005], heal[100005];
	cin >> X >> Y >> M;
	max = M;
	for (int i = 1; i <= X; i++) {
		cin >> damage[i];
		minus += damage[i];
	}
	for (int i = 1; i <= Y; i++) {
		cin >> heal[i];
		plus += heal[i];
	}
	//기본 체력 + 회복력 보다 데미지가 더 크거나 같다면
	if (plus+ max - minus <= 0) {
		cout << '0';
	}
	else {
		int d = 1, h = 1;
		while (1) {
			//쓰러뜨릴 적이 남아있을 때
			if (d-1 != X) {
				M -= damage[d];
				cout << -d << '\n';
				//p = process.back();
				//cout << p << " 가 process에 추가\n";
				d++;

				//아이템이 없거나
				//아이템을 모두 사용했거나
				//필요 이상으로 회복할 수도 있는 경우
				//다시 전투로 복귀
				if (Y==0 || h-1==Y || max-M < heal[h]) {
					continue;
				}
				while (1) {
					M += heal[h];
					cout << h << '\n';
					//p = process.back();
					//cout << p << " 가 process에 추가\n";
					h++;
					//아이템을 모두 사용했다면 break
					if (h - 1 == Y) {
						break;
					}
					//체력 이상으로는 회복되지 않도록	
					if (M + heal[h] > max) {
						break;
					}
				}
			}
			//적을 모두 쓰러뜨렸을 때
			else {
				//적 처치 후 회복 아이템이 남았을 때
				while (h-1 != Y) {
					cout << h << '\n';
					h++;
				}
				break;
			}
		}
	}
}