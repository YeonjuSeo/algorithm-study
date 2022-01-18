#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
    int N;
    cin>>N;
    int result = N;

    for(int i=0;i<N;i++){
        string str;
        cin>> str;
        vector<char> temp;

        for(int j=0;j<str.length();j++){
            if( find(temp.begin(),temp.end(),str[j]) != temp.end()){
                result--;
                break;
            }
            if(j==str.length()) break;
            if(str[j]!= str[j+1]){
                temp.push_back(str[j]);
            }
        }
    }
    cout<<result;
}
