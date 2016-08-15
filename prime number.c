#include <stdio.h>
#include <stdlib.h>
int main()
{
    int p,j,k=1;
    printf("enter number");
    scanf("%d",&p);
   for(j=2;j<p;j++)
   {
       if(p%j==0){
        k=0;
       }
   }
   if(k)
   {
       printf("%d is prime",p);
      exit(0);
   }
   else{
    printf("not prime");
   }

    return 0;
}
