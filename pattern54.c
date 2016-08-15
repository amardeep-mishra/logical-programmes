#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int i,c=3,b;
   for(i=c;i>=-c;i--){

        for(b=c;b>=abs(i);b--) //char
        {
             printf("*");
        }


        printf("\n");
   }
    return 0;
}
