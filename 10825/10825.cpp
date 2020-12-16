#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Person {
	string name;
	int kor, eng, math;

};

bool compare(Person &a, Person &b) {
	if (a.kor != b.kor) {
		return a.kor > b.kor;
	}
	else {
		if (a.eng != b.eng) {
			return a.eng < b.eng;
		}
		else {
			if (a.math != b.math) {
				return a.math > b.math;
			}
			else {
				return a.name < b.name;
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int N;
	cin >> N;
	vector<Person> p(N);
	for (int i = 0; i < N; i++) {
		cin >> p[i].name >> p[i].kor >> p[i].eng >> p[i].math;
	}
	sort(p.begin(), p.end(), compare);
	for (int i = 0; i < N; i++) {
		cout << p[i].name << '\n';
	}
}