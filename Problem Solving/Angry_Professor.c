#include <stdio.h>

int main()
{
    int i,t,n,k,j,c1;
    scanf("%d",&t);

 for(i=0;i<t;i++)
 {
     c1=0;
     scanf("%d%d",&n,&k);
     int arr[n];
     
     for(j=0;j<n;j++)
     {
         scanf("%d",&arr[j]);
     }
     for(j=0;j<n;j++)
     {
         if(arr[j]<=0)
         c1++;
     }
     if(c1>=k)
     {
         printf("NO\n");
     }
     else{
         printf("YES\n");
     }
 }

    return 0;
}
