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
    int i,j,size,temp,sum1=0,sum2=0;
    scanf("%d",&size);
    int arr[size];
    
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        if(arr[j]>arr[i] )
           {
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
           }
    }
       
    for(i=0;i<(size-1);i++)
    {
        sum1 += arr[i];
    }
    for(i=1;i<size;i++)
    {
        sum2 += arr[i];
    }
    
    printf("%d %d",sum1,sum2);
    
}
