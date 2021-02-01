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
	//오른쪽에 있는 수만 볼 수 있도록 배열 끝부분부터 확인
	for (int i= N - 1; i >= 0; i--) {
		//판단할 숫자의 발생 빈도보다 
		//스택의 top(오른쪽 수 중 가장 왼쪽에 있는 수)에 있는 빈도가 작거나 같다면 해당없음
		while (!s.empty() && s.top().first <= cnt[arr[i]]) {
			s.pop();
		}
		//조건을 만족하는 수가 있었는지 없었는지 판단
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