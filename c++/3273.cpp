#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n, sum, answer=0;
    vector<int> v;
    cin >> n;
    for(int i=0;i<n;i++){
        int num;
        cin >> num;
        v.push_back(num);
    }
    cin >> sum;
    sort(v.begin(), v.end());

    int low = 0, high=n-1;
    while(low < high){
        int temp = v[low] + v[high];
        if(temp == sum){
            answer++;
            low++; high--;
            //cout << low << " + "<<high<<'\n';
            continue;
        }
        if(temp > sum){
            high--;
        }
        else{
            low++;
        }
    }
    cout << answer;
}
