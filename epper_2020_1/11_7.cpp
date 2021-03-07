#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

double solution(vector<double> num_arr, int n){
	double temp=0, avg=0;
	sort(num_arr.begin(),num_arr.end());
	temp=num_arr[0];
	for(int i=1;i<num_arr.size();i++){
		// if(num_arr[i]==0) continue;
		// cout<<"temp= "<<temp<<"더할 수= "<<num_arr[i]<<'\n';
		temp+=num_arr[i];
		avg=temp/2;
		temp=avg;
	}
	return avg;
}

int main() {
	int n;
	vector<double> num_arr;

	cin >> n;
	for (int i = 0; i < n; i++){
		double num;
		cin>>num;
		num_arr.push_back(num);
	}
		
	cout<<fixed;
	cout.precision(6);
	cout<<solution(num_arr, n)<<endl;
}
