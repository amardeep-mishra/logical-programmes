#include <stdio.h>
#include <stdlib.h>

int main()
{  long int quo,dec;
    int bno[100],i=1,j;
    printf("enter decimal number");
    scanf("%d",&dec);
    quo=dec;
    while(quo!=0)
    {
        bno[i++]=quo%2;
        quo=quo/2;
    }
    printf("\n binary:");
    for(j=i-1;j>0;j--)
    {
        printf("%d",bno[j]);
    }
      return 0;
}
