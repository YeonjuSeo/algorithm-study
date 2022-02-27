#include <iostream>
#include <vector>
using namespace std;

int N;
vector<int> num;

int getNum(int goal){
    if(num.size() > goal) return num[goal];
    num.push_back((getNum(goal-1) + getNum(goal-2))%15746);
    return num[goal];
}

int main() {
    cin >> N;
    num.push_back(1); num.push_back(1);
    cout << getNum(N);
}
