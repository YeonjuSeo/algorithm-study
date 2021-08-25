#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int N;
	int wand[105], box[105];
	string result = "DA";
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> wand[i];
	}
	for (int i = 0; i < N; i++) {
		cin >> box[i];
	}
	sort(wand, wand + N);
	sort(box, box + N);
	for (int i = 0; i < N; i++) {
		if (wand[i] > box[i]) {
			result = "NE";
			break;
		}
	}
	cout << result;
}
