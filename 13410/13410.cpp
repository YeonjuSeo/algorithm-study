#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int N, K, temp=0, num=0,result=-1;
	int arr[1005] = {0,};
	cin >> N >> K;
	for (int i = 1; i <= K; i++) {
		num = i * N;
		cout << "���� �� = " << num << '\n';
		if (num >= 10) {
			int idx = 0;
			while (num > 0) {
				arr[idx++] = num % 10;
				num /= 10;
			}
			for (int j = 0; j < idx; j++) {
				temp = arr[j];
				cout << j << " ��° �ڸ��� = " << temp << '\n';
				for (int k = idx-1; k > j; k--) {
					temp *= 10;
				}
				num += temp;
			}
			cout << "�Ųٷ� �ٲ� �� = "<<num << '\n';
		}
		result = max(num,result);
		cout << "���� ���� ū ���� " << result << "\n\n";
	}
	cout << result;
}