#include <iostream>
using namespace std;

int main() {
	int N, M, temp, result = -1;
	int cards[100];
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> cards[i];
	}
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			for (int k = j + 1; k < N; k++) {
				temp = cards[i] + cards[j] + cards[k];
				if (temp <= M) {
					result=max(result,temp);
				}
			}
		}
	}
	cout << result;
}