#include <stdio.h>
#include <stdlib.h>
int main()
{
  char str1[]="string as an array";
  char *str2="string as a pointer";
  printf("%s\n",str1);
   printf("%s\n",str2);
   str2++;
    printf("%s\n %s\n %c\n",str1,str2,str2);
}
