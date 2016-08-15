#include <stdio.h>
#include <stdlib.h>
int main()
{
  int i,j,k=4,p,q,b=1,m=1;
  for(i=1;i<=5;i++)
  {
      for(j=1;j<=k;j++)  // for space
      {
          printf(" ");
      }
      k--;

      printf("*");   //for left *

      for(p=1;p<m;p++)
      {
          for(q=1;q<=b;q++)
          {
              printf(" ");  //for space
          }
       b=b+2;
          printf("*");    //for right
      }m=2;

      printf("\n");
  }
    return 0;
}
