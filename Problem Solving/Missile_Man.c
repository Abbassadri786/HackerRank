#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

int size,i;
    scanf("%d",&size);
    
    printf("  /\\\n");
    
    for(i=1;i<=size;i++)
    {
        printf("  ||\n");
    }
    printf(" /||\\\n");
    printf("/:||:\\\n");
    
    for(i=2;i<=size;i++)
    {
        printf("|:||:|\n");
    }
    printf("|/||\\|\n");
    printf("  **\n");
    printf("  **\n");
    
    
    return 0;
}
 
