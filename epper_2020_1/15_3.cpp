#include <iostream>
using namespace std;

int solution(){
	int N,M, storage=0, days=1, result=0;
	cin>>N>>M;
	storage=N;
	while(1){
		
		if(days%M==0){
			storage++;
		}
		
		storage-=1;
		if(storage==0){
			break;
		}
		// cout<<days<<"번째 날 재고 = "<<storage<<'\n';
		days++;
	}

	return days;
}

int main() {
	cout<<solution();
	return 0;
}
