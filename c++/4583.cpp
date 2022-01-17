#include <iostream>
#include <vector>
#include <utility>
using namespace std;

// 거울상 관계 문자 목록
vector<pair<char, char>> v={make_pair('b','d'), make_pair('d','b'), 
make_pair('p','q'),make_pair('q','p'),make_pair('i','i'),make_pair('o','o'),
make_pair('v','v'),make_pair('w','w'),make_pair('x','x')};

int main() {
    string str;
    while(1){
        int i;
        vector<char> temp; // 거울에 비춰지기 전 모습 저장
        cin >> str;
        if(str=="#") break;

        for(i=0;i<str.length();i++){
            bool flag = false;

            // 거울상 관계 문자 목록에 있는지 순회하면서 확인
            for(vector<pair<char,char>>::iterator p = v.begin(); p!=v.end(); p++){
                if(str[i]==(*p).first){
                    flag = true;
                    temp.insert(temp.begin(),(*p).second);
                    break;
                }
            }
            if(!flag){
                cout<<"INVALID\n";
                break;
            } 
        }
        
        if(temp.size()==str.length()){ // 모든 문자가 거울상 관계였다면 거울 비춰지기 전 모습 출력
            for(vector<char>::iterator j=temp.begin();j<temp.end();j++){
                cout<<*j;
            }
            cout<<'\n';
        }
    }
}

// vector의 순회 https://eblee-repo.tistory.com/44
