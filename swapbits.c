#include <stdio.h>
#include <stdlib.h>

int main()
{
   unsigned int n,odd=0,even=0;
   scanf("%d",&n);
   odd=((n&(0xAAAAAAAA))>>1);
   even=((n&(0x55555555))<<1);
   printf("%d",odd|even);
}
