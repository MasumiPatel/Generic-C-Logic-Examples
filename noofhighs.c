#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter=0,num=15,i;
    for(i=0;i<32;i++)
    {
        if(num&(1<<i))    // if((num>>i)&0x1)
        {
            counter++;
        }
    }
    printf("%d",counter);
}
