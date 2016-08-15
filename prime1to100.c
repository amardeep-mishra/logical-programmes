#include <stdio.h>
#include <stdlib.h>

int main()
{  int num=1,i,p;
      //printf("enter number:");
      //scanf("%d",&num);

      while(num<=100){
      p=1;
      for(i=2;i<num;i++)
      {
          if(num%i==0)
          {
              p=0;
          }
      }
      if(p)
      {
          printf("\n %d",num);
      }
     num++;

      }
     return 0;
}
