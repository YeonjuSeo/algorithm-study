#include <iostream>
using namespace std;
//������� �Ǵ� �������� 10�� -2 �����̱� ����
//precision�� �̿��ؼ� ��ȿ���ڸ� 4�ڸ������� �������

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