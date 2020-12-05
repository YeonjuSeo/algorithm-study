#include <iostream>
#include <algorithm> //sort 함수 사용
using namespace std;

int main() {
	int height[9], dwarves[9];
	int sum = 0, flag = 0;
	for (int i = 0; i < 9; i++) {
		cin >> height[i];
		dwarves[i] = height[i];
		sum += height[i];
	}
	int temp = sum;
	for (int i = 0; i < 9; i++) {
		for (int j = i+1; j < 9; j++) {
			if (flag == 1) {
				break; //break는 현재 반복문만 끝내므로 중첩 for문에서 벗어나려면 필요
			}
			temp = temp - height[i] - height[j];
			if (temp == 100) {
				dwarves[i] = 0;
				dwarves[j] = 0;
				flag = 1;
				break;
			}
			else {
				temp = sum;
			}
		}
	}
	sort(dwarves, dwarves + 9);
	for (int i = 2; i < 9; i++) {
		cout << dwarves[i] << '\n';
	}
}