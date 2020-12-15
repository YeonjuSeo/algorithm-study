#include <iostream>
using namespace std;
int main() {
	int cur=0,past=1, check=1, scale[8];
	for (int i = 0; i < 8; i++) {
		cin >> scale[i];
		if (i > 0) {
			cur = scale[i] - scale[i - 1];
			if (i == 1) {
				past = cur;
			}
			if (cur != 1 && cur !=-1) {
				check = 0;
				break;
			}
			else if (cur != past) {
				check = 0;
				cout << "mixed";
				break;
			}
		}
	}
	if (check == 0) {
		cout << "mixed";
	}
	else if (cur == -1) {
		cout << "descending";
	}
	else if(cur==1) {
		cout << "ascending";
	}

}