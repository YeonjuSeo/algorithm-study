#include <iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	cout<<(n-1)/15+1<<' '<<(n-1)%15+1;
	return 0;
}
