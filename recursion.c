#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("%d",f(1471));
}
int f(int n)
{
    if(n<=1)
     return(n);
    else
     return 2*f(n/2)+n%2;
}
