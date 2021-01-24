#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int N, M, time[100005], low=-1, mid, high=0, sum=0, num,result=0;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> time[i];
		high += time[i]; //��� ���Ǹ� �� ���� �� ���� �� ���� ������ ū ũ��
		low = max(low, time[i]); //�� ��緹�̿� �� �ִ� ���Ǵ� ������
	}
	while (low <= high) {
		num = 1; //���� ��緹���� ����
		sum = 0; //��緹�̿� �� ���� ������ ����
		mid = (low + high) / 2;
		for (int i = 0; i < N; i++) {
			if (sum + time[i] > mid) { //�뷮���� �� Ŀ���ٸ�
				num++; //���ο� ��緹�� ������
;				sum = time[i];
			}
			else {
				sum += time[i];
			}
		}
		//�ʹ� ���� ��緹�̸� �����������Ƿ� �뷮�� �� ũ��
		if (num > M) {
			low = mid + 1;
		}
		//�ٿ��ٿ� �� ��緹�̿� �־��ִ� �ڵ带 �ۼ��ߴ��� ����ó���� ����.
		//�׷��� ���� ��緹���� ���� M���� �۾Ƶ� ���� �� �� �ֵ��� �ߴ�.
		// �ݷ� : 9 9
		//1 2 3 4 5 6 7 8 9
		else {  
			high = mid - 1;
			result = mid;
		}
	}
	cout << result;
}