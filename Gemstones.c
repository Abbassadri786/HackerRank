#include<stdio.h>

int main()
    {
    
    int n,i,j,freq[200]={0},count=0;
    char str[200];
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%s\n",str);
        for(j=0;j<26;j++)
        {
            freq[i]=str[j-97];
            if(freq[i]==str[j])
            count++;
        }
    }
    
    printf("%d\n",count);
    return 0;
}
