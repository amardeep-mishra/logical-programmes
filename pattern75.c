
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int i,j,k,m=4,n=1,p=4,q=1;
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
  for(i=1;i<=5;i++)
  {
      for(k=1;k<q;k++)
      {
       printf(" ");
       }
      q++;

      for(j=1;j<=p;j++)  //space
      {
           printf(" ");
           printf("*");
      }
      p--;

       printf("\n");
  }

    return 0;
}
