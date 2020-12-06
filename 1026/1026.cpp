#include <iostream>
#include <algorithm>
using namespace std;

bool decrease(int i, int j) {
	return j < i;
}

int main() {
	int N, sum=0;
	int A[50], B[50], C[50];
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < N; i++) {
		cin >> B[i];
		C[i] = B[i];
	}
	sort(A, A + N);
	reverse(A, A + N);
	sort(C, C + N);
	for (int i = 0; i < N; i++) {
		sum = sum + A[i] * C[i];
	}
	cout << sum;
}