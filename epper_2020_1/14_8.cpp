// 실제 시험에서는 solution 함수를 사용한다는 점을 감안하고 풀이해주세요.
#include <iostream>
#include <queue>
#include <utility>
using namespace std;
int main() {
	queue <pair<int,int>> q;
	bool wantBreak = false;
	int arr[1005][1005], pos_x[4]={0,0,-1,1}, pos_y[4]={1,-1,0,0};
	int N, M, result=-1;
	cin>>N>>M; //N이 y좌표 M이 x좌표
	//상자 내용 입력받기
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			cin>>arr[i][j];
			//익은 토마토를 시작점으로 하기 위해 q에 기록
			if(arr[i][j]==1){
				q.push({i,j});
			}
		}
	}
	//BFS
	while(!q.empty()){
		//익은 토마토를 기준으로 주변 토마토가 익는다.
		int x = q.front().second;
		int y = q.front().first;
		q.pop();
		
		for(int i=0;i<4;i++){ //상하좌우 탐색
			int dx = x+pos_x[i];
			int dy = y+pos_y[i];
			if(0<=dx && dx<=N && 0<=dy && dy<=M && arr[dy][dx]==0){ //상자 안에 있고 익지 않은 토마토
				//그냥 1로 하고 헤아리면 상하좌우가 바뀔 때마다 cnt하게 되므로 주의
				arr[dy][dx]=arr[y][x]+1;
				//새롭게 익은 토마토로부터 익어나갈 수 있게 q에 기록
				q.push({dy,dx});
			}
		}
	}
	//정답 판별
	for(int i=0;i<M;i++){
		if(wantBreak==true) break;
		for(int j=0;j<N;j++){
			//과정 끝났는데도 안익은 토마토가 있음
			if(arr[i][j]==0){
				result =-1;
				wantBreak = true;
				break;
			}
			
			if(result<arr[i][j]){
				result = arr[i][j];
			}
		}
	}
	if(result ==1) cout<<0; //다 익은 상태여서 증가된 게 없음
	else if(result==-1) cout<<-1;
	else cout<<result-1; //1인 것부터 증가시켜갔으므로 끝에는 -1해줘야함
	return 0;
}
//https://jdselectron.tistory.com/55
