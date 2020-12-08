#include <iostream>
#include <stack>
using namespace std;

int main() {
	int n, idx = 0, num = 1, check=0;
	int arr[100000] = {0};
	char cal[100000];
	stack <int> st;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] >= num) {
			while (num != arr[i] + 1) {
				st.push(num++);
				cal[idx++] = '+';
			}
			st.pop();
			cal[idx++] = '-';
		}
		else {
			if (st.top() == arr[i]) {
				st.pop();
				cal[idx++] = '-';
			}
			else {
				cout << "NO\n";
				check = 1;
				break;
			}
		}
	}
	if (check == 0) {
		for (int j = 0; j < idx; j++) {
			cout << cal[j] << '\n';
		}
	}
}

//https://congcoding.tistory.com/53