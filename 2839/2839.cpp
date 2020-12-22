#include <iostream>
#include <vector>
using namespace std;
int main() {
	int N, num, result=987654;
	cin >> N;
	if (N >= 5) {
		for (int i = 0; i <= N / 5; i++) {
			for (int j = 0; j <= N / 3; j++) {
				if ((i * 5 + j * 3) == N) {
					result = min(result, i + j);
				}
			}
		}
	}
	else {
		for (int i = 0; i <= N / 3; i++) {
			if (3 * i == N) {
				result = min(result, i);
			}
		}
	}
	if (result == 987654) {
		cout << "-1";
	}
	else {
		cout << result;
	}
}