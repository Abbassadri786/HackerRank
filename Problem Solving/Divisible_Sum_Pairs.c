#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()

{
   int i,j,n,count=0,num;

   scanf("%d",&n);
   scanf("%d",&num);

   int arr[n];

   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }

for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
           if((arr[j]+arr[i])%num==0 )
           {
            count++;
           }
           
       }
   }
       printf("%d",count);
     
   
   return 0;

}

