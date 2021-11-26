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
    int s,t,a,b,m,n,i;
    scanf("%d%d",&s,&t);
    scanf("%d%d",&a,&b);
    scanf("%d%d",&m,&n);
    int arr1[m],arr2[n],c1=0,c2=0;
    
    for(i=0;i<m;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<m;i++)
    {
        if((arr1[i]+a)>=s && (arr1[i]+a)<=t)
        c1++;
    }
    for(i=0;i<n;i++)
    {
        if((arr2[i]+b)>=s && (arr2[i]+b)<=t)
        c2++;
    }

    printf("%d\n%d",c1,c2);
  
    return 0;
}
