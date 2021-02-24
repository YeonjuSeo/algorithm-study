#include <iostream>
using namespace std;
int arr[10], total=0,result=0;
int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	for (int i = 1; i <= 5; i++) {
		int temp;
		cin >> temp;
		arr[i] = temp;
		total += temp;
	}
	int idx = 5, sum=0;
	while (total != 0) {
		if (arr[idx] == 0) {
			idx--;
			continue;
		}
		sum = idx;
		arr[idx] -= 1;
		total -= 1;
		for (int i = 5; i > 0; i--) {
			while (1) {
				if (arr[i] == 0) break;
				if (sum + i > 5) {
					break;
				}
				else {
					sum += i;
					total -= 1;
					arr[i] -= 1;
				}
			}
		}
		result++;
		sum = 0;
	}
	cout << result << '\n';
}
