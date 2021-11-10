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
    int size,i,d,temp;
    scanf("%d %d",&size,&d);
    
    int arr[size];
    
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size/2;i++)
    {
       temp=arr[i];
       arr[i]=arr[size-i-1];
       arr[size-i-1]=temp; 
    } 
    for(i=0;i<size-d;i++)
    {
        temp=arr[i];
        arr[i]=arr[(size-i)%d];
        arr[(size-i)%d]=temp;
    } 
    for(i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
    
}
