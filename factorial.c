#include <stdio.h>
#include <stdlib.h>



int main()
{
    int fact=1,n=5,i=1;
    while(i<=n)
    {
        fact=fact*i;
        i++;

    }
    printf("%d",fact);
}

int main()
{
    int fact=1,n=5,i;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);
}
