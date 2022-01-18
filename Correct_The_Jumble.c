#include <bits/stdc++.h>

using namespace std;

int main()
{
   long long t,i,j,f,c1=0,n1,n2;
   cin>>t;
   
   int arr1[65];
   
   for(i=0 ; i<t; i++)
   {
       cin>>n1>>n2;
       f = n1^n2;
       c1=0,j=0;
       while(f>0)
       {
           arr1[j] = f%2;
           f = f/2;
           j++;
           c1++;
       }
       long long count=0;
       for(j=0 ; j<c1; j++)
       {
       if(arr1[j]==1)
       count++;
       }
       cout<<count<<endl;
   }
   
   
   return 0;
}
