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
    int size,sum1=0,i,j,sum2=0,result;

scanf("%d",&size);

int arr[size][size];

for(i=0;i<size;i++)
{
    for(j=0;j<size;j++)
    {
      scanf("%d",&arr[i][j]);  
    }
}
for(i=0;i<size;i++)
{
    for(j=0;j<size;j++)
    {
      if(i==j)
      sum1 += arr[i][j];
      if(i+j==(size-1))
      sum2 += arr[i][j];  
    }
}
result=abs(sum1 - sum2);
printf("%d",result);
return 0;
}
