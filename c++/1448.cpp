#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int N, max=-1, arr[1000005];;
  cin>>N;
  for(int i=0;i<N;i++){
      cin>>arr[i];
    }
    sort(arr, arr+N);
    for(int i=N-1;i>=2;i--){
        int temp =0;
        temp = arr[i]+arr[i-1]+arr[i-2];
        if((arr[i-1]+arr[i-2])>arr[i]){
            max= temp;
            break;
            }
    }
    cout<<max;
}
