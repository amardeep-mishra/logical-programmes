#include <stdio.h>
#include <stdlib.h>
int main()
{
   char a[100],temp;
   int i,j=0;
   printf("enter string:");
   gets(a);
   i=0;
   j=strlen(a)-1;
   while(i<j)
   {
       temp=a[i];
       a[i]=a[j];
       a[j]=temp;
       i++;
       j--;
   }
   puts(a);
    return 0;
}
