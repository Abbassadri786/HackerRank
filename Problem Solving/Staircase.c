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
    int i,j,n;
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++){
            if(i+j>=(n-1))
            printf("#");
            
            else
            printf(" ");
            
        }
        printf("\n");
        
    }
}
    
