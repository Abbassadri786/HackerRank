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
    int size,i,rnd;
    scanf("%d",&size);
    
    int arr[size];
    
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        if(arr[i]<38)
        {
            printf("%d\n",arr[i]);
        }
        else if(arr[i]%5>2)
        {
            rnd=arr[i]+(5-arr[i]%5);
            printf("%d\n",rnd);
        
        }
        else{
            printf("%d\n",arr[i]);
        }
    }

    return 0;
}
