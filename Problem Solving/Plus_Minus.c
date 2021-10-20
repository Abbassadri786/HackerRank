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
    int i,j,sum=0,c1=0,c2=0,c3=0;
    int size;
    scanf("%d",&size);
    int arr[size];
    
    
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        if(arr[i]>0)
        {
            c1++;
        }
        else if(arr[i]<0)
        {
            c2++;
        }
        else
        {
            c3++;
        }
    }
    float d1,d2,d3;
    d1=(float)c1/size;
    d2=(float)c2/size;
    d3=(float)c3/size;
    
    printf("%f\n%f\n%f\n",d1,d2,d3);
    
    
}
