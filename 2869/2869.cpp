#include <iostream>
#include <cmath>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int A, B, V, result;
	cin >> A >> B >> V;
	result = (V - B) / (A - B);
	if ((V - B) % (A - B) != 0) {
		result += 1;
	}
	cout << result;
}