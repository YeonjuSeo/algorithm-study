#include <iostream>
using namespace std;
int main() {
	int n, arr[30005], DP[30005][5];
	cin >> n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		DP[i+1][0]=max(max(DP[i][0],DP[i][1]),DP[i][2]);
		DP[i+1][1]=DP[i][0]+arr[i];
		DP[i+1][2]=DP[i][1]+arr[i];
		// cout<<DP[i][0]<< ' '<<DP[i][1]<< ' '<<DP[i][2]<< '\n';
	}
	// cout<<DP[n][0]<< ' '<<DP[n][1]<< ' '<<DP[n][2]<< '\n';
	cout<<max(max(DP[n][0],DP[n][1]),DP[n][2]);
	return 0;
}
