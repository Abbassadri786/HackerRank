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
  int freq[100]={0},i,size;
  scanf("%d",&size);
  int arr[size];
  
  for(i=0;i<size;i++)
  {
    scanf("%d",&arr[i]);
    freq[arr[i]]++;
  }
  for(i=0;i<100;i++)
  {
    printf("%d ",freq[i]);
  }
  return 0;
  
}
