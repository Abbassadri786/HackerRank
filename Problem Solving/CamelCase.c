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
    char s[100000],j;
    scanf("%s",s);
    
    int i,c1=0,count=0;
    
    while(s[count]!='\0')
    count++;
    
    for(i=0; i<count; i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            c1++;
        }
        
    }
    printf("%d",c1+1);

    return 0;
}
