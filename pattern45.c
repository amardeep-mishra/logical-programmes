#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,k,j,n=4,m=0,c=1,b;
   for(i=1;i<=5;i++){

        for(k=1;k<=n;k++) //space
        {
        printf(" ");
        }
         n--;

        for(b=1;b<=c;b++) //char
        {
             printf("%d",b);
        }
         c++;

         for(j=m;j>0;j--) //char
        {
           printf("%d",j);
        }
         m++;



    printf("\n");
   }
    return 0;
}
