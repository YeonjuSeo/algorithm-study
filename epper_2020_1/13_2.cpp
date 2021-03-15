#include <iostream>
using namespace std;
int main() {
	int n;
	int ways[10000];
	cout<<"계단의 수를 입력하시오 : ";
	cin>>n;
	ways[1]=1; ways[2]=2;
	for(int i=3;i<=n;i++){
		ways[i]=ways[i-1]+ways[i-2];
	}
	cout<<"계단 오르는 방법의 수 : "<<ways[n];
	return 0;
}
