#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int N, M, time[100005], low=-1, mid, high=0, sum=0, num,result=0;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> time[i];
		high += time[i]; //모든 강의를 한 번에 다 넣을 수 있을 정도로 큰 크기
		low = max(low, time[i]); //한 블루레이에 못 넣는 강의는 없도록
	}
	while (low <= high) {
		num = 1; //만든 블루레이의 개수
		sum = 0; //블루레이에 들어간 강의 길이의 총합
		mid = (low + high) / 2;
		for (int i = 0; i < N; i++) {
			if (sum + time[i] > mid) { //용량보다 더 커진다면
				num++; //새로운 블루레이 꺼내기
;				sum = time[i];
			}
			else {
				sum += time[i];
			}
		}
		//너무 많은 블루레이를 만들어버렸으므로 용량을 더 크게
		if (num > M) {
			low = mid + 1;
		}
		//꾸역꾸역 다 블루레이에 넣어주는 코드를 작성했더니 오답처리가 났다.
		//그래서 만든 블루레이의 수가 M보다 작아도 답이 될 수 있도록 했다.
		// 반례 : 9 9
		//1 2 3 4 5 6 7 8 9
		else {  
			high = mid - 1;
			result = mid;
		}
	}
	cout << result;
}