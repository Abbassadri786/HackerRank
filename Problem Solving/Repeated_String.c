#include <stdio.h>

int main()
{
    char s[100];
    scanf("%s",s);
    long long int n,x;
    int i,count=0,c1=0;
    scanf("%lld",&n);
    
    while(s[count]!='\0')
    {
        count++;
    }
    
    
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a')
        c1++;
    }
    
    x=n/count;
    x *= c1;
    n=n%count;
    
    for(i=0;i<n;i++)
    {
        if(s[i]=='a')
        x++;
        
    }
    printf("%lld",x);
    
    return 0;
}
