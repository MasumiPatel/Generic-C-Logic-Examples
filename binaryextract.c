#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n=11,r=0;
    while(n!=0)
    {
        r=n&1;
        n=n>>1;
        printf("%d",r);
    }
}
