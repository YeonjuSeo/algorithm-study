//프로그래머스에서는 main함수 및 입출력문이 필요하지 않습니다. 대신 solution함수만 작성하면 됩니다.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int>b){
	return a.second < b.second;
}

int main() {
	int n, cnt=0, cur1=-1,cur2=-1, time, start[1005],end[1005];
	vector<pair<int, int>> v;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>start[i];
	}
	for(int i=0;i<n;i++){
		cin>>end[i];
	}
	for(int i=0;i<n;i++){
		v.push_back({start[i],end[i]});
	}
	
	sort(v.begin(),v.end(),cmp);
	// for(int i=0;i<n;i++){
	// 	cout<<v[i].first<<" "<<v[i].second<<'\n';
	// }
	for(int i=0;i<v.size();i++){
		// cout<<"cur1 = "<<cur1<<" cur2 = "<<cur2<<'\n';
		if(v[i].first>=cur1 && v[i].first>=cur2){
			cnt++;
			if(v[i].first-cur1<=v[i].first-cur2){
				// cout<<"시작: "<<v[i].first<<" 끝: "<<v[i].second<<"인 "<<i<<"번째 학생이 1번 좌석에 앉습니다.\n";
				cur1=v[i].second;
			}
			else{
				// cout<<"시작: "<<v[i].first<<" 끝: "<<v[i].second<<"인 "<<i<<"번째 학생이 2번 좌석에 앉습니다.\n";
				cur2=v[i].second;
			}
		}
		else if(v[i].first >= cur1){
			// cout<<"시작: "<<v[i].first<<" 끝: "<<v[i].second<<"인 "<<i<<"번째 학생이 1번 좌석에 앉습니다.\n";
			cnt++;
			cur1=v[i].second;
		}
		else if(v[i].first>=cur2){
			// cout<<"시작: "<<v[i].first<<" 끝: "<<v[i].second<<"인 "<<i<<"번째 학생이 2번 좌석에 앉습니다.\n";
			cnt++;
			cur2=v[i].second;
		}
		else{
			continue;
		}
	}
	cout<<cnt;
}
