#include <iostream>
#include <vector>
using namespace std;

int solution(int n[],int r[][100],int goal,int N,int R){
  int answer=0, target = goal, next=goal;
	vector<int> need[105];
	for(int i=0;i<R;i++){
		int a, b;
		for(int j=0;j<2;j++){
			if(j==0) a=r[i][j];
			else b=r[i][j];
		}
		// cout<<"a = "<<a<<" b = "<<b<<'\n';
		need[b].push_back(a); //b는 1부터 a는 0번째 인덱스부터 들어감
	}
	answer=n[goal-1]; //n은 0번째부터 들어가있음
	while(1){
		int temp=-1;
		target=next;
		if(need[target].size()==0){
			break;
		}
		for(int i=0;i<need[target].size();i++){
			if(temp<n[need[target][i]-1]){
				temp = n[need[target][i]-1];
				next=need[target][i];
			}
		}
		answer+=temp;
	}
	return answer;
}


int main() {
    int N;
    int R;
    int n[100] = {0};
    int r[100][100] = {0};
    int goal, k;

    scanf("%d %d", &N, &R);

    for (int i = 0; i < N; i++) {
        scanf("%d", &n[i]);
    }
	
    for (int k = 0; k < R; k++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &r[k][j]);
        }
    }

    scanf("%d", &goal);
    k = solution(n, r, goal, N, R);
    printf("%d\n", k);
}
