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
    long int x1,v1,x2,v2,c=0;
    scanf("%ld %ld %ld %ld",&x1,&v1,&x2,&v2);
    
    while(x1<100000000)
    {
        x1=x1+v1;
        x2=x2+v2;
        
        if(x1==x2)
        {
            c=1;
            break;
        }
    }
    if (c==1) {
    printf("YES");
    }
    else{
        printf("NO");
    }
    
    
    

    return 0;
}
