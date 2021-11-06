#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[1000];
    scanf("%s",s);
    int i,a[10]={0};
    
    
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            a[s[i]-48]++;
        }
        
        
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    

    return 0;
}
