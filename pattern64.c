#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int i,j,k,m=4,n=1;
  for(i=1;i<=5;i++)
  {
      for(j=1;j<=m;j++)  //space
      {
          printf(" ");
      }
      m--;

      for(k=1;k<=n;k++)
      {
       printf("*");
       printf(" ");
       }
      n++;
       printf("\n");
  }
    return 0;
}
