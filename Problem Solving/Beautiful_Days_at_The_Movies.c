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
    int i,c1=0,rev_num=0,num,rem;
    long int k,m,n;
    scanf("%ld %ld %ld",&m,&n,&k);
    
    for(i=m;i<=n;i++)
    {
        num=i;
        while(num!=0)
        {
            rem=num%10;
            rev_num = (rev_num*10) +rem;
            num=num/10;
        }
        if(abs(rev_num-i)%k==0)
        {
            c1++;
        }
        rev_num=0;
    }
    
    printf("%d",c1);

    return 0;
}
