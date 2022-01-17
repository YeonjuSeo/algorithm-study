#include <iostream>
#include <string>
using namespace std;

int main(){
    char ucpc[6]={'U','C','P','C','1'};
    int target = 0;
    string str;
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        if(str[i]==ucpc[target]){
            target++;
        }
    }
    if(target==4) cout << "I love UCPC";
    else cout <<"I hate UCPC";
}
