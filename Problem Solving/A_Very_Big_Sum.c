#include <stdio.h>

int main()
{
    long long int size,i;
    
    
    
    scanf("%lli",&size);
    
    long long int arr[size],sum=0;
    
    for(i=0;i<size;i++)
    {
        scanf("%lli",&arr[i]);
        
    }
    
    for(i=0;i<size;i++)
    {
        sum += arr[i];
        
    }
    
    printf("%lli",sum);
    

    return 0;
}
