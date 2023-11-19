#include <stdio.h>
#include <stdlib.h>
#include<string.h>

void rs(char str[],int sindex,int eindex)
{
 char temp;
 while(sindex<eindex)
 {
     temp=str[sindex];
     str[sindex]=str[eindex];
     str[eindex]=temp;
     sindex++;eindex--;
 }
}
int palindrome(char*str,int si,int ei)
{
    if(str[si]!=str[ei])
    {
        return 0;
    }
    si++;
    ei--;
    return 1;
}
//str[eindex] is also written as *(str+eindex)
int main()
{
    char mainstr[]="malayalam";

    int sindex=0;
    int eindex=sindex;
     while(mainstr[eindex]!='\0')
    {
        if(mainstr[eindex]!=' ')
        {
         eindex++;
        }
        else
        {
            rs(mainstr,sindex,eindex-1);
             sindex=eindex+1;
        eindex=sindex;
        }

   }
        rs(mainstr,sindex,eindex-1);
        printf("reverse string= %s",mainstr);



            int ispalindrome=palindrome(mainstr,0,strlen(mainstr)-1);
            printf("%d",ispalindrome);
}
