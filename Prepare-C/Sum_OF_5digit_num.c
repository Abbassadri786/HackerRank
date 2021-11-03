#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,tem,rem=0,sum=0;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    tem=n;
    while(tem!=0)
    {
        rem = tem%10;
        tem = tem/10;
        sum += rem;
        
    }
    printf("%d",sum); 
    return 0;
}
