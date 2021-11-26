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
    int i,j,n,max,ans;
    scanf("%d",&n);
    
    int arr[n],freq[6]={0};
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        freq[arr[i]]++;
    }
    max=freq[0];
    for(i=1;i<6;i++)
    {
        if(max<freq[i])
        {
            max=freq[i];
            ans=i;
        }
    }
    printf("%d",ans);
   

    return 0;
}
