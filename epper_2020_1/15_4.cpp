//프로그래머스에서는 main함수 및 입출력문이 필요하지 않습니다. 대신 solution함수만 작성하면 됩니다.
#include <iostream>
#include <vector>
using namespace std;

void solution(){
	int arr[10], sum=0, a, b;
	vector<int> v;
	for(int i=0;i<9;i++){
		cin>>arr[i];
		sum+=arr[i];
	}
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			int temp = sum;
			temp=temp-arr[i]-arr[j];
			if(temp == 100){
				a = i;
				b=j;
				break;
			}
		}
	}
	for(int i=0;i<9;i++){
		if(i==a || i == b) continue;
		cout<<arr[i]<<' ';
	}
}

int main() {
	solution();
}
