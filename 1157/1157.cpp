#include <iostream>
#include <string>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	string word;
	int ascii, freq[30] = { 0 },cnt=0,temp=0,result=0;
	cin >> word;
	for (int i = 0; i < word.length(); i++) {
		ascii = int(word[i])-65;
		cout << ascii << '\n';
		if (ascii > 31) {
			ascii -= 32;
		}
		freq[ascii]++;
		cout << ascii << "��°�� 1�߰�\n";
	}
	for (int i = 0; i < 30; i++) {
		if (cnt <= freq[i]) {
			if (cnt == freq[i]) {
				result = -1;
			}
			else {
				result = i;
			}
			cnt = freq[i];
			cout << "���� ���� ���� �� "<<char(result+65) << '\n';
			cout << result << "��°���Դ�.\n\n";
		}
	}
	if (result == -1) {
		cout << "?";
	}
	else {
		cout << char(result + 65);
	}

}