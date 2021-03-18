#include <iostream>
#include <string>
#include <stack>
using namespace std;

int solution(int n, string str){
	stack<int> q;
	for(int i=0;i<str.length();i++){
		if(str[i]==' ') continue;
		if(str[i]!='+' && str[i]!='-' &&str[i]!='*' &&str[i]!='/'){
			q.push(int(str[i])-48);
		}
		else{
			int n1, n2;
			n2 = q.top();
			q.pop();
			n1 = q.top();
			q.pop();
			// cout<<" n1 = "<<n1<< " n2 = "<<n2<<'\n';
			if(str[i]=='+'){
				q.push(n1+n2);
			}
			else if(str[i]=='-'){
				q.push(n1-n2);
			}
			else if(str[i]=='*'){
				q.push(n1*n2);
			}
			else if(str[i]=='/'){
				q.push(n1/n2);
			}
		}
	}
	return q.top();
}

int main() {
	int num;
	string str;
	cin>>num;
	cin.ignore();
	getline(cin,str);
	cout<<solution(num, str);
	// cout<<int('+')<<' '<<int('-')<<' '<<int('*')<<' '<<int('/')<<' '; // 43 45 42 47
}
