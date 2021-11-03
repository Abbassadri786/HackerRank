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
    int n,i,max;
    scanf("%d",&n);
    long arr[n],count=0;
    
    for(i=0;i<n;i++)
    {
        scanf("%ld",&arr[i]);
    }
    max=arr[0];
    
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==max)
        {
            count++;
        }
    }
    printf("%ld",count);
    
    return 0;
    
}
