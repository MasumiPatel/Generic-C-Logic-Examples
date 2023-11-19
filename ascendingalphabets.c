#include <stdio.h>
#include <stdlib.h>

int main()
{

    char a[5];
    int i=0,j=0,t;
     printf("enter the numbers of array");
  for(i=0;i<5;i++)
  {
    scanf("%c",&a[i]);
  }

    for(i=0;i<5;i++)
       {
           for(j=i+1;j<5;j++)
           {
            if(a[i]>a[j])
     {
         t=a[i];
         a[i]=a[j];
         a[j]=t;
     }
       }
       }
       for(i=0;i<5;i++)
       {
           printf("the ascending order of the alphabets is %c",a[i]);
       }
}


