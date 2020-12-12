#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int N=0, num, j, d, check,cnt=0;
	int arr[4];
	cin >> N;
	for (int i = 1; i <= N; i++) {
		num = i;
		//cout << "\n현재 num = " << num << '\n';
		if (num < 100) {
			cnt++;
			//cout << "현재 cnt = " << cnt << '\n';
		}
		else {
			j = 0;
			check = 1;
			while (num > 0) {
				arr[j] = num % 10;
				num /= 10;
				j++;
			}
			d = arr[j - 2] - arr[j - 1];
			//cout << "현재 d = " << d << '\n';
			for (int k = j-1; k > 0; k--) {
				if (arr[k-1] - arr[k] != d) {
					check = 0;
					break;
				}
			}
			if (check == 1) {
				cnt++;
				//cout << "현재 cnt = " << cnt << '\n';
			}
		}
	}
	cout << cnt;
}