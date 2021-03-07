#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;
int solution(vector<int> v, int start, int end) {
	int answer = 0;
	while(start<=end){
		// cout<<"start = "<<start<<" end = "<<end<<'\n';
		if(v[start]==v[end]){
			if(start+1==end) break;
			start++; end--;
			continue;
		}
		answer++;
		if(v[start]<v[end]){
			// cout<<"앞이 더 작다\n";
			v[start+1]+=v[start];
			
			start+=1;
		}
		else{
			// cout<<"끝이 더 작다\n";
			v[end-1]+=v[end];
			end-=1;
		}
	}
	return answer;
}

int main(void) {
  int n, i;
	vector<int> v;
  int start = 0, end;
  cin >> n;
	end=n-1;
	for (i = 0; i < n; i++) {
		int num;
		cin>>num;
		v.push_back(num);
	}
	cout << solution(v, start, end);

  return 0;
}
