#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    int n, k, t, m,i,j,s;
    for (int a = 0; a < T; a++) {
        cin >> n >> k >> t >> m;

        int team_problem[101][101] = {};
        int submit[101] = {};
        int time[101] = {};
        int score_sum[101] = {};

        for (int b = 1; b <= m; b++) {
            cin >> i >> j >> s;
            if (team_problem[i][j] < s)
                team_problem[i][j] = s;
            submit[i]++;
            time[i] = b;
        }
        for (int b = 1; b <= n; b++) {
            for (int c = 1; c <= k; c++) {
                score_sum[b] += team_problem[b][c];
            }
        }
        int rank = 1;
        for (int b = 1; b <= n; b++) {
            if (b == t)
                continue;
            if (score_sum[b] > score_sum[t]) rank++;
            else if (score_sum[b] == score_sum[t]) {
                if (submit[b] < submit[t])
                    rank++;
                else if (submit[b] == submit[t]) {
                    if (time[b] < time[t])
                        rank++;
                }
            }
        }
        cout << rank << '\n';
    }
}