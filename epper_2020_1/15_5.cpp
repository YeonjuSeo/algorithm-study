//프로그래머스에서는 main함수 및 입출력문이 필요하지 않습니다. 대신 solution함수만 작성하면 됩니다.
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	string input;
	vector<char> result;
	int cnt=1;
	cin >> input;
	if(input[0]=='1'){
		result.push_back('1');
	}
	for(int i=1;i<input.length();i++){
		if(input[i]!=input[i-1]){
			// cout<<"cnt = "<<cnt<<'\n';
			result.push_back(char(cnt+64));
			cnt=1;
		}
		else{
			// cout<<"cnt를 증가합니다.\n";
			cnt++;
		}
	}
	// cout<<"cnt = "<<cnt<<'\n';
	result.push_back(char(cnt+64));
	for(int i=0;i<result.size();i++){
		cout<<result[i];
	}
	return 0;
}
