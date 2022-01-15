#include <iostream>

using namespace std;

int main()
{
   int t;
   cin>>t;
   
   long long b,w,bc,wc,z,res1,res2,res3;
   
   for(int i=0 ; i<t; i++)
   {
       cin>>b>>w>>bc>>wc>>z;
       
       res1=b*bc+w*wc;
       res2=b*bc + w*(bc+z);
       res3= w*wc + b*(wc+z);
       
       if(res3<res1 &&  res3<res2)
       {
           cout << res3 << endl;
       }
       else if(res2<res1 && res2<res3)
       {
           cout << res2 << endl;
       }
       else{
           cout << res1 << endl;
       }
       
   }
   
   return 0;
}
