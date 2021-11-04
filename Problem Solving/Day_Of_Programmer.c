#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    
    if(x>=1918 && x<=2700)
    {
      if(((x%4==0) && (x%100!=0)) || x%400==0)
      {
        printf("12.09.%d",x);
      }
      else if(x==1918)
      {
          printf("26.09.1918");
      }
      else
      {
        printf("13.09.%d",x);
      }
    }
    else if(x>=1700)
    {
      if(x%4==0)
      {
        printf("12.09.%d",x);
      }
      else
      {
        printf("13.09.%d",x);
      }
    }

      return 0;
}
