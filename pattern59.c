#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int i,c=3,b,k;
   for(i=c;i>=-c;i--){

        for(k=1;k<=abs(i);k++)
        {
            printf(" ");
        }

        for(b=c;b>=abs(i);b--) //char
        {
             printf("*");
        }


        printf("\n");
   }
    return 0;
}
