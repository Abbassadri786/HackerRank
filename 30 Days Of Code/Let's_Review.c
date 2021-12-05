#include <stdio.h>

int main()
{
    int i,j,count=0,n;
    scanf("%d",&n);
    char s[10000];
    
    
    
    for(i=1; i<=n; i++)
    {
        scanf("%s",s);
        while(s[count]!='\0') count++;
        for(j=0; j<count; j++)
        {
          if(j%2==0)
          {
            printf("%c",s[j]);
          }
        }
        printf(" ");
        for(j=0; j<count; j++)
        {
            if(j%2!=0)
            {
                printf("%c",s[j]);
            }
        }
        printf("\n");
        count=0;
    }

    return 0;
}
