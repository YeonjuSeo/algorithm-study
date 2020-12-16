#include <iostream>
#include <string>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	string str;
	char c;
	int time = 0;
	getline(cin, str);
	for (int i = 0; i < str.length(); i++) {
		c = str[i];
		time += 2;
		if (c <= 'C') {
			time += 1;
		}
		else if (c <= 'F') {
			time += 2;
		}
		else if (c <= 'I') {
			time += 3;
		}
		else if (c <= 'L') {
			time += 4;
		}
		else if (c <= 'O') {
			time += 5;
		}
		else if (c <= 'S') {
			time += 6;
		}
		else if (c <= 'V') {
			time += 7;
		}
		else if (c <= 'Z') {
			time += 8;
		}
	}
	cout << time;
}