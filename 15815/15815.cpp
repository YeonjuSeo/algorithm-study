#include <iostream>
#include <stack>
using namespace std;
int main() {
	string equa;
	int ascii, n1, n2, result;
	cin >> equa;
	stack<int> s;
	for (int i = 0; i < equa.length(); i++) {
		ascii = int(equa[i]);
		if (ascii == 42 || ascii == 43 || ascii == 45 || ascii == 47) {
			n1 = s.top();
			s.pop();
			n2 = s.top();
			s.pop();
			if (ascii == 42) {
				//cout << n1<<" �� "<< n2<< "���ϱ�\n";
				s.push(n1 * n2);
			}
			else if (ascii == 43) {
				//cout << n1 << " �� " << n2  << "���ϱ�\n";
				s.push(n1 + n2);
			}
			else if (ascii == 45) {
				//cout << n2 << " ���� " << n1  << "����\n";
				s.push(n2 - n1);
			}
			else if (ascii == 47) {
				//cout << n2 << " �� " << n1 << "������\n";
				s.push(n2 / n1);
			}
		}
		else {
			s.push(ascii-48);
		}
	}
	result = s.top();
	cout << result;
}