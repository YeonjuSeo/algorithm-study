#include <iostream>
#include <vector>
using namespace std;
int a[1000005];

long long sum( vector<int> &a) {
	long long result = 0;
	for (vector<int>::iterator iter = a.begin(); iter < a.end(); iter++) {
		result += *iter;
	}
	return result;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int n;
	
}