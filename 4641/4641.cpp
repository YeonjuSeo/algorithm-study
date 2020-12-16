#include <iostream>
#include <string>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int n, i=0, cnt=0, arr[15];
	while (1) {
		cin >> n;
		if (n == -1) {
			break;
		}
		else if (n == 0) {
			for (int j = 0; j < i; j++) {
				for (int k = 0; k < i; k++) {
					if (2 * arr[j] == arr[k]) {
						cnt++;
						break;
					}
				}
			}
			cout << cnt << '\n';
			i = 0; cnt = 0;
		}
		else {
			arr[i++] = n;
		}
	}
}