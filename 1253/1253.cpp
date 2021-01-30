#include <iostream>
#include <algorithm>

//https://jovialcode.tistory.com/20gjal 
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int N, result=0, left, right, flag=0;
	long long arr[2005], sum=0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + N);
	for (int i = 0; i < N; i++) {
		left = 0; right = N - 1;
		//cout << "\nÆÇ´Ü: " << arr[i] << '\n';
		while (1) {
			if (left == i) {
				left++;
			}
			else if (right == i) {
				right--;
			}
			if (left == right) {
				break;
			}
			sum = arr[left] + arr[right];
			
			//cout << "left = " << arr[left] << " right = " << arr[right] << " sum= " << sum << '\n';
			if (sum > arr[i]) {
				right--;
			}
			else if (sum == arr[i]) {
				result++;
				//cout<<"result = " << result << '\n';
				break;
			}
			else {
				left++;
			}
		}
	}
	cout << result;
}