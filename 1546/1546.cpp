#include <iostream>
using namespace std;
//절대오차 또는 상대오차가 10의 -2 제곱이기 위해
//precision을 이용해서 유효숫자를 4자리까지만 출력하자

int main() {
	int N;
	double M = -1, sum=0;
	double score[1005];
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> score[i];
		M = max(M, score[i]);
	}
	for (int i = 0; i < N; i++) {
		sum += score[i] / M * 100;
	}
	cout.precision(4);
	cout<< sum / double(N);
}