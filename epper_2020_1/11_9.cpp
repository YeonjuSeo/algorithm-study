#include <iostream>
using namespace std;

int result=0, n;

void solution(int open, int close){
	// cout<<"n = "<<n;
	//여는 괄호 닫는 괄호 둘 다 다 썼으면 result에 +1
	if(open == n && close == n){
		result++;
		return;
	}
	else if(open == n){
		// cout<<"result = "<<result<<" 닫는다.\n";
		solution(open, close+1);
	}
	else if(open == close){
		// cout<<"result = "<<result<<" 연다.\n";
		solution(open+1,close);
	}
	else if(open>close){
		// cout<<"result = "<<result<<" 연다.\n";
		solution(open+1,close);
		// cout<<"result = "<<result<<" 닫는다.\n";
		solution(open,close+1);
	}
	//여는 괄호 다 썼으면 닫는 괄호만 사용 가능
	//닫는 괄호가 여는 괄호 수랑 똑같으면 열기만 가능
	//여는 괄호가 닫는 괄호보다 더 많으면 열거나 닫거나

	//
}

int main() {
	cin>>n;
	solution(0,0);
	cout<<result;
}
