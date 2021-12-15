#include <iostream>
#include <cmath>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

long long sum=0;
vector<pair<int, int>> v;
pair<int, int> freq = {0, 0};
int n;

int isExist(int num){
    for(int i=0;i<v.size();i++){
        if(v[i].first == num) return i;
    }
    return -1;
}

bool cmp(pair<int, int>a, pair<int, int>b){
    return a.first < b.first;
}

int main() {
    int N, freq_re=0, idx;
    cin>> N;
    int arr[N];

    for(int i=0;i<N;i++){
        cin>> n;
        arr[i]= n;
        sum+=n;

        idx = isExist(n);
        if(idx < 0){
            v.push_back({n, 1});
        } 
        else {
            v[idx].second++;
        }
    }

    sort(arr, arr+N);
    sort(v.begin(), v.end(), cmp);

    // 최빈값 저장을 위한 비교
    for(int i=0;i<v.size();i++){
        if(v[i].second > freq.second){
            freq = {v[i].first, v[i].second};
            freq_re = 0;
        }
        else if(v[i].second == freq.second && freq_re != 1){
            freq.first = v[i].first;
            freq_re = 1;
        }
    }

    cout << round((double)((double)sum/(double)N))<<'\n'; // 산술평균
    cout << arr[N/2] <<'\n';// 중앙값
    cout << freq.first<<'\n';// 최빈값
    cout << v[v.size()-1].first - v[0].first;// 범위
}
