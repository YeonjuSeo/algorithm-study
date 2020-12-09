#include <iostream>
using namespace std;

int N, start = 0, link = 0;
int S[20][20] = { 0 }, team[20];
int temp, result = 1000;
void pickMembers(int cur, int cnt) {
	if (cnt == N / 2) {
		start = 0; link = 0;
		for (int i = 0; i < N; i++) {
			for (int j = i+1; j < N; j++) {
				if (team[i] == 1 && team[j] == 1) {
					start = start + S[i][j] + S[j][i];
				}
				else if (team[i] != 1 && team[j] != 1) {
					link=link + S[i][j] + S[j][i];
				}
			}
		}
		temp = abs(start - link);
		result = min(result, temp);
		return;
	}
	for (int i = 0; i < N; i++) {
		if (team[i] != 1 && i>cur) {
			team[i] = 1;
			pickMembers(i,cnt+1);
			team[i] = 0;
		}
	}
}

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> S[i][j];
		}
	}
	pickMembers(-1, 0);
	cout << result;
}

// https://fjvbn2003.tistory.com/434