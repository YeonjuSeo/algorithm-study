 #include <iostream>
 #include <string>
 #include <algorithm>
 using namespace std;

 string board[50];
 string WB[8] = {
     {"WBWBWBWB"},
     {"BWBWBWBW"},
     {"WBWBWBWB"},
     {"BWBWBWBW"},
     {"WBWBWBWB"},
     {"BWBWBWBW"},
     {"WBWBWBWB"},
     {"BWBWBWBW"}
 };
 string BW[8] = {
     {"BWBWBWBW"},
     {"WBWBWBWB"},
     {"BWBWBWBW"},
     {"WBWBWBWB"},
     {"BWBWBWBW"},
     {"WBWBWBWB"},
     {"BWBWBWBW"},
     {"WBWBWBWB"}
 };
 int compareWB(int y, int x) {
     int cnt = 0;
     for (int i = y; i < y + 8; i++) {
         for (int j = x; j < x + 8; j++) {
             if (board[i][j] != WB[i - y][j - x]) {
                 cnt++;
             }
         }
     }
     cout << cnt<<'\n';
     return cnt;
 }
 int compareBW(int y, int x) {
     int cnt = 0;
     for (int i = y; i < y + 8; i++) {
         for (int j = x; j < x + 8; j++) {
             if (board[i][j] != BW[i - y][j - x]) {
                 cnt++;
             }
         }
     }
     cout << cnt<<'\n'<<'\n';
     return cnt;
 }
 int main() {
     int result = 65;
     int n,m;
     cin >> n >> m;
     for (int i = 0; i < n; i++) {
         cin >> board[i];
     }
     for (int i = 0; i < n - 7; i++) {
         for (int j = 0; j < m - 7; j++) {
             /// <summary>
             /// 두 함수 실행 결과를 비교한 최솟값 중에서도 가장 최소를 찾아야하므로 result와 비교 과정이 한 번 더 필요하다.
             result = min(result,min(compareWB(i, j), compareBW(i, j)));
         }
     }
     cout << '\n'<<'\n'<<'\n'<<result;
}
