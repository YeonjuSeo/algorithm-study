#include <iostream>
#include <string>
using namespace std;
string T;
string S;
string temp;
bool exist = false;
int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> T >> S;
	S = S + S;
	for (int i = 0; i < S.length() / 2; i++) {
		temp = S.substr(i, S.length()/2);
		//cout << "현재: "<<temp << '\n';
		if (T.find(temp) !=string::npos) {
			exist = true;
			cout << "yes";
			break;
		}
	}
	if (exist == false) {
		cout << "no";
	}
}
