#include <iostream>
#include <string>
using namespace std;

//1�� L�� ���Ϸ� ���� N�ڸ� �� �� I��° ��
int N, L; 
//1�� 31�� ���Ϸ� ���� 31�ڸ� ������ ������ 
//2^31�̶� int ���� �ʰ�
long long I,DP[35][35];
string result="";

//1�� l�� ���Ϸ� ���� n�ڸ� ���� ����
long long Count(int n, int l) {
	//long long& cnt = DP[n][l];
	//�̹� ���� DP �����̹Ƿ� �״�� ����
	if (DP[n][l] != 0) {
		return DP[n][l];
	}
	if (n == 0 || l == 0) {
		DP[n][l] = 1;
		return DP[n][l];
	}
	//1�� �Ⱦ��� ���
	DP[n][l] = Count(n - 1, l);
	//1�� �����ִٸ� 1�� ���� ���
	if (l > 0) {
		DP[n][l] += Count(n - 1, l - 1);
	}
	return DP[n][l];	
}

//���̰� n�̰� 1�� ����� Ƚ���� l���� �� i��° ��
void findNum(int n,int l,long long i) {
	long long point;
	if (n == 0) {
		return;
	}
	//����� �� �ִ� 1�� ������ �������� 0
	if (l == 0) {
		for (int j = 0; j < n; j++) {
			result += '0';
		}
		return ;
	}
	point = Count(n - 1, l);
	//n-1�ڸ����� l���� 1�� �Ἥ ���� ������ i���� ������
	//�̹� count�� �� �ȿ� �����Ƿ�
	//1�� ��� Ƚ���� �ٲ㼭 �ٽ� Ž��
	if (point < i) {
		result += '1';
		findNum(n-1,l-1,i-point);
	}
	//n-1�ڸ����� l���� 1�� �Ἥ ���� ������ i���� ũ�ų� ���ٸ�
	//�̹� count�� �� �ȿ� ������ ����
	else {
		result += '0';
		findNum(n - 1, l, i);
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> N >> L >> I;
	findNum(N, L, I);
	cout << result;
}
// http://www.cplusplus.com/forum/windows/17153/