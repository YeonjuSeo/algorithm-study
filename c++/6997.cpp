#include <iostream>

using namespace std;
int main() {
	int T;

	cin >> T;
	for (int i = 0; i < T; i++) {
		int circle = 0, square = 0, s_flag[5] = { 0, }, g_flag[5] = {0,};
		string secret, guess;
		cin >> secret >> guess;
		for (int j = 0; j < 4; j++) {
			if (secret[j] == guess[j]) {
				circle++;
				s_flag[j] = -1;
				g_flag[j] = -1;
			}
		}
		for (int j = 0; j < 4; j++) {
			for (int k = 0; k < 4; k++) {
				if (j == k || s_flag[j] == -1 ||g_flag[k]==-1) continue;
				if (secret[j] == guess[k]) {
					square++;
					s_flag[j] = -1;
					g_flag[k] = -1;
					break;
				}
			}
		}
		
		cout << "For secret = " << secret << " and guess = " << guess << ", " << circle << " circles and " << square << " squares will light up.\n";
	}
}
