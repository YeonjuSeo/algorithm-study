#include <iostream>
#include <utility>
#include <stack>
using namespace std;

int N, arr[1000005], cnt[1000005], result[1000005];
stack<pair<int, int>> s;

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		cnt[arr[i]]++;
	}
	//�����ʿ� �ִ� ���� �� �� �ֵ��� �迭 ���κк��� Ȯ��
	for (int i= N - 1; i >= 0; i--) {
		//�Ǵ��� ������ �߻� �󵵺��� 
		//������ top(������ �� �� ���� ���ʿ� �ִ� ��)�� �ִ� �󵵰� �۰ų� ���ٸ� �ش����
		while (!s.empty() && s.top().first <= cnt[arr[i]]) {
			s.pop();
		}
		//������ �����ϴ� ���� �־����� �������� �Ǵ�
		if (s.empty()) {
			result[i] = -1;
		}
		else {
			result[i] = s.top().second;
		}
		s.push({cnt[arr[i]],arr[i]});
	}
	for (int i = 0; i < N; i++) {
		cout << result[i] << ' ';
	}
}