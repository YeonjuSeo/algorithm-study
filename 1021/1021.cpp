#include <iostream>
#include <deque>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int N, M, turn[55], idx=0, n2=0, n3=0, temp=0, result=0;
	deque<int> o;
	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		o.push_back(i);
	}
	deque<int> two(o);
	deque<int> three(o);
	for (int i = 0; i < M; i++) {
		cin >> turn[i];
	}
	while (idx<M) {
		//cout << "뽑아야하는 원소 = " << turn[idx]<<"\n";
		if (o.front() == turn[idx]) {
			o.pop_front();
			two.pop_front();
			three.pop_front();
			idx++;
		}
		else {
			for (int j = 0; j <= o.size(); j++) {
				if (o.at(j) == turn[idx]) {
					n2 = j; n3 = o.size() - j;
					if (n2 <= n3) {
						result += n2;
						while (o.front() != turn[idx]) {
							temp = o.front();
							o.pop_front();
							o.push_back(temp);
							three.pop_front();
							three.push_back(temp);
							//cout << temp << " 를 뒤로 보낸다.\n";
						}
						break;
					}
					else {
						result += n3;
						while (o.front() != turn[idx]) {
							temp = o.back();
							o.pop_back();
							o.push_front(temp);
							two.pop_back();
							two.push_front(temp);
							//cout << temp << " 를 앞으로 보낸다.\n";
						}
						break;
					}
				}
			}
		}
	}
	cout << result;
}