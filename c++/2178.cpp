#include <iostream>
#include <queue>
#include <string>
using namespace std;
int N,M, cnt =0;
int xDir[4]={0,0,-1,1}, yDir[4]={1,-1,0,0};
queue<pair<int, int>>q;

int main() {
    cin>> N>>M;

    int maze[N][M];
    for(int i=0;i<N;i++){
        string str;
        cin>>str;
        for(int j=0;j<str.length();j++){
            maze[i][j]=str[j]-48;
        }
        
    }
    
    q.push(make_pair(0,0));
    while(!q.empty()){
        pair<int, int> p = q.front();
        q.pop();
        for(int i=0;i<4;i++){
            int xPos = p.first + xDir[i], yPos = p.second + yDir[i];
            if(xPos < 0 || xPos >= M || yPos < 0 || yPos >= N) continue;
            if(maze[yPos][xPos] == 1){
                if(yPos == N-1 && xPos == M-1 && maze[yPos][xPos] !=1){
                    if(maze[p.second][p.first]+1 < maze[yPos][xPos]) maze[yPos][xPos] = maze[p.second][p.first]+1;
                }
                else{
                    maze[yPos][xPos] = maze[p.second][p.first]+1;
                    q.push(make_pair(xPos,yPos));
                }
                /*for(int i=0;i<N;i++){
                    for(int j=0;j<M;j++){
                        cout<< maze[i][j]<<' ';
                    }
                    cout<<'\n';
                }
                cout<<'\n';*/
            }
        }   
    }
    cout << maze[N-1][M-1];

}
