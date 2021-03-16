#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int solution(int time[],vector<int> need[], int goal){
	int answer=time[goal], temp, next = goal, target = goal;
	while(1){
		// cout<<"target = "<<next<<" answer = "<<answer<<'\n';
		target = next;
		temp = -1;
		if(need[target].size() == 0 ) break;
		for(int i=0;i<need[target].size();i++){
			if(time[need[target][i]]>temp){
				temp = time[need[target][i]];
				next = need[target][i];
			}
		}
		answer+=temp;
	}
	return answer;
}


int main() {
	int N; //공정수
  int R; //관계수
  int time[105] = {0}; //공정별 걸리는 시간
  int goal, k;
	vector<int> need[105]; //공정이 시작되기 위해 해결되어야할 전 공정

	//입력받기
  cin>>N>>R;
  for (int i = 1; i <= N; i++) {
		cin>>time[i];
  }
  for (int k = 1; k <= R; k++) {
    int a,b;
		cin>>a>>b;
		need[b].push_back(a);
  }
	// for (int k = 1; k <= R; k++) {
	// 	cout<<"rel["<<k<<"] = ";
	// 	for(int j=0;j<rel[k].size();j++){
	// 		cout<<rel[k][j]<<' ';
	// 	}
	// 	cout<<'\n';
	// 	cout<<"need["<<k<<"] = ";
	// 	for(int j=0;j<need[k].size();j++){
	// 		cout<<need[k][j]<<' ';
	// 	}
	// 	cout<<'\n';
	// }
	cin>>goal;
   
  k = solution(time, need,goal);
  cout<<k;
}
