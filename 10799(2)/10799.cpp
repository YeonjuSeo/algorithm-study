#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int cnt=0;
	string str;
	stack<int> s;
	getline(cin, str);
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '(') {
			s.push(str[i]);
		}
		else {
			s.pop();
			//레이저
			if (str[i - 1] == '(') {
				cnt += s.size();
			}
			//파이프의 끝
			else {
				cnt += 1;
			}
		}
	}
	cout << cnt;
}

//https://hsp1116.tistory.com/29