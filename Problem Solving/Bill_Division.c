#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main()
{
    int actual,charged,i,c,size,sum=0,total;
    scanf("%d",&size);
    scanf("%d",&c);
    
    int arr[size];
    
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        sum +=arr[i]; 
        
    }
    scanf("%d",&charged);
    
    actual=((sum-arr[c])/2);
    
    if(actual==charged)
    {
        printf("Bon Appetit");
    }
    else{
        printf("%d",charged-actual);
    }
    
    
    

    return 0;
}
