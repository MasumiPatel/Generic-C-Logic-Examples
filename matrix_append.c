#include <stdio.h>
#include <stdlib.h>

int main()
{
int i,j,k,l,p,n,q,sum=0,count=0;
printf("enter columns and rows");
scanf("%d%d",&i,&j);
int a[i][j];
printf("enter the values");
for(k=0;k<i;k++)
{
    for(l=0;l<j;l++)
    {
        scanf("%d",&a[k][l]);
    }
}
if(j>i)
{
    n=j-i;
    while(n>count)
    {
    for(q=0;q<j;q++)
    {
        a[i][q]=1;
       // printf("%d",a[1][0]);
    }
    count++,i++;
    }
    for(p=0;p<j;p++)
{
    sum+=a[p][p];
}
}
if(i>j)
{
    n=i-j;
    while(n>count)
    {
    for(q=0;q<i;q++)
    {
        a[j][q]=1;
       // printf("%d",a[1][0]);
    }
    count++,j++;
    }
   for(p=0;p<i;p++)
{
    sum+=a[p][p];
}
}
printf("\n\nthe sum of the elements of the diagonal matrix is %d",sum);
    return 0;
}
