#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin>>n;
  
  long arr[n],i;
  for(i=0; i<n; i++){
    cin>>arr[i];
  }
  long max=arr[0],min=arr[0],c1=0,c2=0;
  for(i=0; i<n; i++){
    
    if(max < arr[i]){
      max = arr[i];
      c1++;
    }
    else if(min > arr[i]){
      min = arr[i];
      c2++;
    }
  }
  cout<<c1<<" "<<c2;
  
  
  return 0;
}
