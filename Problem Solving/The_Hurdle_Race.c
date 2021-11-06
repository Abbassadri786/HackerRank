#include <assert.h>
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
    int i,n,max,H_max,dose;
    scanf("%d",&n);
    scanf("%d",&H_max);
    
    int h[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&h[i]);
    }
    h[0]=max;
    for(i=0;i<n;i++)
    {
        if(h[i]>max)
        max=h[i];
    }
    if(H_max<max)
    {
        dose=max-H_max;
        printf("%d",dose);
    }
    else{
        printf("0");
    }
    
    
    return 0;
}
