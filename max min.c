#include <stdio.h>
#include <stdlib.h>

int main()
{  int n,i,a[50],max=0,min;
    printf("enter n");
    scanf("%d",&n);
    printf("enter number");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<n;i++)
     {
         if(a[i]>max)
         {
             max=a[i];
         }
        else   if(a[i]<min)
         {
             min=a[i];
         }
     }

    printf("\n %d %d ",max,min);
    return 0;
}
