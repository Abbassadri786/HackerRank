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
    int size,i,digit,c=0;
    scanf("%d",&size);
    long long int x,n;
    
    for(i=0;i<size;i++)
    {
        scanf("%lld",&n);
        x=n;
       
        while(n!=0)
        {
            digit=n%10;
            if(digit!=0)
            {
                if(x%digit==0)
                c++;
            }
            n = n/10;
        }
        printf("%d\n",c);
        c=0;
    }
    
    
    return 0;
}
