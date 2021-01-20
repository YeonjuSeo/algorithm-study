#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

bool cmp(long long a, long long b) {
	return a > b;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	unsigned long long M, N, arr[100005], result=0, candy,i=0;
	cin >> M >> N;;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + N, cmp); //내림차순 정렬

	//i는 사탕 나눠줄 대상의 수
	while(i<N) {
		//사탕을 나눠줄 대상 수보다 사탕이 더 많이 있다면
		if (M >= i + 1) {
			//다음으로 조금만 받고싶어하는 친구와 개수가 같아졌다면
			if (arr[i] == arr[i + 1]) {
				i++; //사탕 나눠줄 대상 수 확대
			}
			else {
				M -= i + 1; //대상 당 하나씩 사탕 나눠주기
				arr[i]--; //시간 초과를 피하기 위해 이 다음 값과 가장 가까운 값만 바꾸기
				candy = arr[i]; //가장 큰 값(가장 많이 받고싶어하는 사탕의 수)을 저장
			}
		}
		//대상에게 하나씩 사탕을 나눠줄 수 없을 때
		else {
			for (int j = i; j >= 0; j--) {
				//사탕이 남아있다면
				if (M > 0) {
					//사탕을 하나 더 받은만큼 분노
					result += (candy - 1) * (candy - 1);
					M--;
				}
				else {
					result += candy * candy;
				}
			}
			//아예 사탕을 받지 못한 학생들은 처음 희망한 사탕 수만큼 분노
			for (int j = i + 1; j < N; j++) {
				result += arr[j] * arr[j];
			}
			break;
		}
	}
	cout << result;
}

//https://velog.io/@weenybeenymini/%EB%B0%B1%EC%A4%80-2878%EB%B2%88-%EC%BA%94%EB%94%94%EC%BA%94%EB%94%94