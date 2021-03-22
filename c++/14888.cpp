#include <iostream>
#include<vector>
using namespace std;
int N, arr[105], small =100000005, big=-100000005;
vector<int> op;
vector<char>turn;

void findNums(vector<char> eqa, int p,int mn, int mt, int d ) { //지금까지 구성된 연산자 목록
	//사용할 수 있는 연산자 수가 없는 경우
	int symbol = p + mn + mt + d;
	if (symbol == 0) {
		int temp = arr[0];
		for (int i = 0; i < eqa.size(); i++) {
			if (eqa[i] == '+') {
				temp += arr[i+1];
			}
			else if (eqa[i] == '-') {
				temp -= arr[i + 1];
			}
			else if (eqa[i] == '*') {
				temp *= arr[i + 1];
			}
			else if (eqa[i] == '/') {
				temp /= arr[i + 1];
			}
		}
		if (temp > big) {
			big = temp;
		}
		if (temp < small) {
			small = temp;
		}
		//cout << "현재 big = " << big << " 현재 small = " << small << '\n';
		return;
	}
	else {
		if (p > 0) {
			eqa.push_back('+');
			findNums(eqa, p - 1, mn, mt, d);
			eqa.erase(eqa.end()-1);
		}
		if (mn > 0) {
			eqa.push_back('-');
			findNums(eqa, p, mn - 1, mt, d);
			eqa.erase(eqa.end()-1);
		}
		if (mt > 0) {
			eqa.push_back('*');
			findNums(eqa, p, mn, mt - 1, d);
			eqa.erase(eqa.end()-1);
		}
		if (d > 0) {
			eqa.push_back('/');
			findNums(eqa, p, mn, mt, d - 1);
			eqa.erase(eqa.end()-1);
		}
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int symbol = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < 4; i++) {
		int n;
		cin >> n;
		op.push_back(n);
		symbol += n;
	}
	findNums(turn,op[0],op[1],op[2],op[3]);
	cout << big << '\n' << small;
}
