#include <iostream>
#include <string>
using namespace std;
int main() {
	string str;
	int check = 0;
	getline(cin, str);
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == 'U' && check == 0) {
			check = 1;
		}
		if (str[i] == 'C' && check == 1) {
			check = 2;
		}
		if (str[i] == 'P' && check == 2) {
			check = 3;
		}
		if (str[i] == 'C' && check == 3) {
			check = 4;
			break;
		}
	}
	if (check==4) {
		cout << "I love UCPC";
	}
	else {
		cout << "I hate UCPC";
	}
}