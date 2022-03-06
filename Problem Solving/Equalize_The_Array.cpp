#include <bits/stdc++.h>

using namespace std;

int main(){
  int n,freq[101]={0};
  cin>>n;
  
  int arr[n],i;
  for(i=0; i<n; i++){
    cin>>arr[i];
    freq[arr[i]]++;
  }
  int c1=0,max=freq[0];
  for(i=0; i<=100; i++){
    if(max<freq[i]){
      max=freq[i];
    }
  }
  if(max==1){
      cout << n-1;
  }
  else{
      cout << abs(max-n);
  }

  return 0;
}
