#include <iostream>
#include <string>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int N,sum=0;
	string str;
	cin >> N;
	cin.ignore();
	getline(cin, str);
	for (int i = 0; i < str.length(); i++) {
		sum += (int)str[i] - 48;
	}
	cout << sum;
}