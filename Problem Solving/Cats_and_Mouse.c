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
    int q,cat_A,cat_B,mouse_C,dis_A=0,dis_B=0,i;
    scanf("%d",&q);
    
    for(i=0;i<q;i++)
    {
        scanf("%d %d %d",&cat_A,&cat_B,&mouse_C);
        dis_A= abs(cat_A-mouse_C);
        dis_B= abs(cat_B-mouse_C);
        
        if(dis_A < dis_B)
        {
            printf("Cat A\n");
        }
        else if(dis_B < dis_A)
        {
            printf("Cat B\n");
        }
        else
        {
            printf("Mouse C\n");
        }
    }
    
}
