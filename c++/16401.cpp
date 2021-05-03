//재풀이

#include <iostream>
#include <algorithm>
using namespace std;
int M, N, lefts=1, rights=-1, mid, result=0;
int L[1000005];
int main() {
	ios::sync_with_stdio; cin.tie(0); cout.tie(0);
	
	cin >> M >> N; //조카 수, 과자 수
	for (int i = 0; i < N; i++) {
		cin >> L[i];
		if (rights < L[i]) rights = L[i];
	}
	while (lefts<=rights) {
		int cnt = 0;
		//가장 짧은 과자와 가장 긴 과자의 평균
		mid = (lefts + rights) / 2;
		//cout << "mid = " << mid<<'\n';
		
		//설정한 길이로 몇 개의 과자를 만들 수 있는지
		for (int i = 0; i < N; i++) {
			cnt += (L[i] / mid);
			//cout << "cnt = " << cnt<<'\n';
		}
		if (cnt >= M) {
			if(result<mid) result = mid;
			lefts = mid + 1;
		} 
		else rights=mid-1;
		
	}
	cout << result;
}
