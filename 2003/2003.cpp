#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	long long sum = 0, arr[10005] = {0,};
	int N, M, start=0, end=0,result=0;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sum = arr[start];
	while (1) {
		//end�� N�� �Ǿ start�� ���ϸ鼭 sum�� ��ȭ��ų �� �ֵ����ϱ� ����
		//���� ������ sum�� ũ�ų� ���� ��츦 �Ǵ��� �Ŀ� �Ǵ��Ѵ�.
		if (sum > M) {
			sum -= arr[start];
			start++;
			//cout << "sum = " << sum << '\n';
			//cout << "start = " << start << " end = " << end << '\n';
		}
		else if (sum == M) {
			result++;
			sum -= arr[start];
			start++;
			//cout << "sum = " << sum << '\n';
			//cout << "start = " << start << " end = " << end << '\n';
		}
		else if (end == N) {
			break;
		}
		else {
			end++;
			sum += arr[end];
			//cout << "sum = " << sum << '\n';
			//cout << "start = " << start << " end = " << end << '\n';
		}
	}
	cout << result;
}