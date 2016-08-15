#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[50],str1[50];
    int n,i,j;
    printf("enter string");
    gets(str);
    n=strlen(str);
   // printf("%d",n);
    j=n-1;
    for(i=0;i<n-1;i++)
    {
       if(str[i]!=str[j])
       {
        printf("\n not palindrome");
        exit(0);
       }
       j--;
    }
    printf("\n palindrome");
     return 0;
}
