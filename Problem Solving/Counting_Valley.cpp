#include <bits/stdc++.h>

using namespace std;

int main(){
  int size;
  cin>>size;
  
  char str[size];
  cin>>str;
  
  int level=0,arr[size];
  
  for(int i=0; i<size; i++){
    if(str[i]=='U'){
      level++;
      arr[i] = level;
    }
    if(str[i]=='D'){
      level--;
      arr[i] = level; 
    }
  }
  level = 0;
  for(int i=0; i < size; i++){
    if(arr[i]<0 && arr[i+1]>=0){
      level++;
    }
  }
  
  cout<<level;
  
  return 0;
}
