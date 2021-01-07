#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int N, M, num,len1[1005],len2[1005],idx1=0,idx2=0,result=0;
	int cut=0, cur_cut=0,prev_cut=0,cake=0,cur_cake=0,prev_cake=0;
	
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> num;
		if (num % 10 == 0) {
			len1[idx1] = num;
			idx1++;
		}
		else {
			len2[idx2] = num;
			idx2++;
		}
	}
	sort(len1, len1 + idx1);
	sort(len2, len2 + idx2);

	//10으로 나누어 떨어지는 케이크부터
	for (int i = 0; i < idx1; i++) {
		if (M <= 0) {
			break;
		}
		else {
			if ((len1[i] / 10 - 1) <= M) {
				cake += len1[i] / 10;
				M -= ((len1[i] / 10) - 1);
			}
			else {
				cake += M;
				M = 0;
			}
		}
		//cout << "result= " << result << "\n\n";
	}
	//그렇지 않은 롤케이크
	for (int i = 0; i < idx2; i++) {
		if (M <= 0) {
			break;
		}
		else {
			if (len2[i] / 10 <= M) {
				cake += len2[i] / 10;
				M -= len2[i] / 10;
			}
			else {
				cake += M;
				M = 0;
			}
		}
		//cout << "result= " << result << "\n\n";
	}
	cout << cake;
}