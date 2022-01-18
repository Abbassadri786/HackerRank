#include <bits/stdc++.h>

using namespace std;

int main()
{
   long long n1,n2,t,i=0,j=0,c1=0,c2=0;
   cin>>t;
   
   int arr1[100],arr2[100];
   
   for(i=0 ; i<t; i++)
   {
       cin>>n1>>n2;
       
       while(n1>0)
       {
           
           arr1[i] = n1%2;
           n1 = n1/2;
           i++;
           c1++;
       }
       
       while(n2>0)
       {
           arr2[j] = n2%2;
           n2 = n2/2;
           j++;
           c2++;
           
       }
   }
   long long count=0;
   
   if(c2>c1)
   {
       for(i=0,j=0; j<c2 ; i++,j++)
       {
           if(arr1[i]!=arr2[j])
           count++;
       }
       cout<<count<<endl;
       
   }
   else{
       for(i=0,j=0; i<c1 ; i++,j++)
       {
           if(arr1[i]!=arr2[j])
           count++;
       }
       cout<<count<<endl;
   }
   
   return 0;
}
