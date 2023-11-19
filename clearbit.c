#include <stdio.h>
#include <stdlib.h>
void main()
{
    int num,n,res;
    scanf("%d",&num);
    scanf("%d",&n);
    res=num&(~(1<<n));
    printf("%d",res);
}
//if n=2 the number is shifted by 2 places hence 1 goes to bit no 3
//num=111
//n=1
//res=101
