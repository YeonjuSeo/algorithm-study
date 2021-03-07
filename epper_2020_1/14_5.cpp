// 실제 시험에서는 Solution 클래스의 solution 함수를 사용합니다. 이를 감안하여 풀이해주세요.

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <utility>
using namespace std;

bool cmp(pair<int,string> a, pair<int, string> b){
	if(a.second>b.second){
		return b>a;	
	}
	else{
		return a>b;
	}
}
int main() {
	int N,K, cnt[100005];
	vector<pair<int,string>> v;
	cin>>K>>N;
	for(int i=0;i<K;i++){
		string str;
		cin>>str;
		v.push_back({0,str});
	}
	sort(v.begin(),v.end());
	for(int i=0;i<N;i++){
		char c;
		int idx;
		pair<int, string> ans={123456789,"aa"};
		pair<int, string> temp={123456789,"aa"};
		cin>>c;
		for(int j=0;j<v.size();j++){
			if(v[j].second[0]==c){
				temp.first=v[j].first;
				temp.second=v[j].second;
				if(ans.first>temp.first){
					ans.first=temp.first;
					ans.second=temp.second;
					// cout<<"temp: first = "<<ans.first<<" second = "<<ans.second<<'\n';
					idx=j;
				}
			}
		}
		cnt[idx]++;
		v[idx].first+=1;
		// cout<<v[idx].first<<'\n';
		cout<<ans.second<<'\n';
	}
}
