// Method 1:-
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int a[5];
    long sum=0;
    
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++){
        
        sum+=a[i];
    }
    int min=a[0];
    int max=a[0];
    for(int i=1;i<5;i++){
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
    printf("%ld %ld",sum-max,sum-min);
    return 0;
}
//Method :2


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
    int i,j,temp;
    long long int sum1=0,sum2=0;
    int arr[5];
    
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        if(arr[j]>arr[i] )
           {
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
           }
    }
       
    for(i=0;i<4;i++)
    {
        sum1 += arr[i];
    }
    for(i=1;i<5;i++)
    {
        sum2 += arr[i];
    }
    
    printf("%lli %lli",sum1,sum2);
    
}

