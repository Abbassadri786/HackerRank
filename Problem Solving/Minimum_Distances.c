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
    int n,min;
    scanf("%d",&n);
    min=n+1;
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
     scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n;i++)
    {
      for(int j=i+1;j<n;j++)
      {
        if (arr[i]==arr[j])
      {
         if(min>(j-i))
        {
        min=(j-i);
        }
      }
      }  
    }
    if (min==n+1)
    {
      printf("-1");
    }
    else
    {
     printf("%d",min);
    }


    return 0;
}
