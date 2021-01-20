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
	sort(arr, arr + N, cmp); //�������� ����

	//i�� ���� ������ ����� ��
	while(i<N) {
		//������ ������ ��� ������ ������ �� ���� �ִٸ�
		if (M >= i + 1) {
			//�������� ���ݸ� �ް�;��ϴ� ģ���� ������ �������ٸ�
			if (arr[i] == arr[i + 1]) {
				i++; //���� ������ ��� �� Ȯ��
			}
			else {
				M -= i + 1; //��� �� �ϳ��� ���� �����ֱ�
				arr[i]--; //�ð� �ʰ��� ���ϱ� ���� �� ���� ���� ���� ����� ���� �ٲٱ�
				candy = arr[i]; //���� ū ��(���� ���� �ް�;��ϴ� ������ ��)�� ����
			}
		}
		//��󿡰� �ϳ��� ������ ������ �� ���� ��
		else {
			for (int j = i; j >= 0; j--) {
				//������ �����ִٸ�
				if (M > 0) {
					//������ �ϳ� �� ������ŭ �г�
					result += (candy - 1) * (candy - 1);
					M--;
				}
				else {
					result += candy * candy;
				}
			}
			//�ƿ� ������ ���� ���� �л����� ó�� ����� ���� ����ŭ �г�
			for (int j = i + 1; j < N; j++) {
				result += arr[j] * arr[j];
			}
			break;
		}
	}
	cout << result;
}

//https://velog.io/@weenybeenymini/%EB%B0%B1%EC%A4%80-2878%EB%B2%88-%EC%BA%94%EB%94%94%EC%BA%94%EB%94%94