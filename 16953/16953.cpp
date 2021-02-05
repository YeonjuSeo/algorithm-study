#include <iostream>
#include <utility>
#include <queue>
using namespace std;
int A, B;
queue<pair<long long,long long>> q; //������� ���ڿ� ������ Ƚ��
pair<long long, long long> temp;

long long bfs(int num) {
	q.push({num,1});
	while (!q.empty()) {
		temp = q.front();
		//cout << "���� �� = " << temp.first <<" ������� ���� Ƚ�� = "<<temp.second<< '\n';
		q.pop();
		if (temp.first == B) {
			return temp.second;
		}
		else if (temp.first > B) { //�ٷ� �����ϸ� �ȵ�...
			continue;
		}
		else {
			q.push({ temp.first * 2, temp.second + 1 });
			q.push({ temp.first * 10 + 1,temp.second + 1 });
		}
	}
	return -1;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> A >> B;
	cout<<bfs(A);
}