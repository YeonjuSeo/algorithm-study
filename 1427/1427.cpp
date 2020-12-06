#include <iostream>
#include <algorithm>
using namespace std;

bool decrease(int i, int j) {
	return j < i;
}

int main() {
	int N, result=0, idx=0;
	int num[10] = {0};
	cin >> N;

	while (N > 0) {
		num[idx] = N % 10;
		N /= 10;
		idx++;
	}
	sort(num, num + 10, decrease);
	for (int i = 0; i < idx; i++) {
		cout << num[i];
	}
}