#include <iostream>
#include <string>
using namespace std;

//1이 L번 이하로 쓰인 N자리 수 중 I번째 수
int N, L; 
//1이 31개 이하로 사용된 31자리 숫자의 개수는 
//2^31이라서 int 범위 초과
long long I,DP[35][35];
string result="";

//1이 l개 이하로 사용된 n자리 수의 개수
long long Count(int n, int l) {
	//long long& cnt = DP[n][l];
	//이미 계산된 DP 원소이므로 그대로 리턴
	if (DP[n][l] != 0) {
		return DP[n][l];
	}
	if (n == 0 || l == 0) {
		DP[n][l] = 1;
		return DP[n][l];
	}
	//1을 안쓰는 경우
	DP[n][l] = Count(n - 1, l);
	//1이 남아있다면 1을 쓰는 경우
	if (l > 0) {
		DP[n][l] += Count(n - 1, l - 1);
	}
	return DP[n][l];	
}

//길이가 n이고 1을 사용한 횟수가 l번일 때 i번째 수
void findNum(int n,int l,long long i) {
	long long point;
	if (n == 0) {
		return;
	}
	//사용할 수 있는 1이 없으면 나머지는 0
	if (l == 0) {
		for (int j = 0; j < n; j++) {
			result += '0';
		}
		return ;
	}
	point = Count(n - 1, l);
	//n-1자리동안 l개의 1을 써서 나온 개수가 i보다 작으면
	//이미 count된 수 안에 없으므로
	//1의 사용 횟수를 바꿔서 다시 탐색
	if (point < i) {
		result += '1';
		findNum(n-1,l-1,i-point);
	}
	//n-1자리동안 l개의 1을 써서 나온 개수가 i보다 크거나 같다면
	//이미 count된 수 안에 정답이 있음
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