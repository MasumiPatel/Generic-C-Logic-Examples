#include <stdio.h>
#include <stdlib.h>

int main()
{
   unsigned int i,num,res=0,rem;
   scanf("%d",&num);
   for(i=0;i<32;i++)
   {
       rem=((num>>i)&0x1);
       res=((res<<1)|rem);
   }
   printf("0x%x",res);
}
// for(i=0;i<32;i++)
//instead of i<32
//write size(num)*8;
//valid for n-bit complier
