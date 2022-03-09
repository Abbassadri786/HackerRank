#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t;
   cin>>t;
   
   int k,n,i,j;
   for( i=0; i<t; i++){
       cin>>k>>n;
       int arr[n];
       for( j=0; j<n; j++){
           cin>>arr[j];
       }
       int sum=0,p1,p2;
       for(int m=0; m<n; m++){
           sum=0;
           for(j=m+1; j<n; j++){
               if(arr[m]+arr[j]==k){
                   p1=m+1;
                   p2=j+1;
                   break;
               }
           }
       }
       cout<<p1<<" "<<p2<<endl;
   }
   
   return 0;
}
