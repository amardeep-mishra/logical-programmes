#include <stdio.h>
#include <stdlib.h>
int main()
{   int n,temp,sum=0;
    printf("enter num");
    scanf("%d",&n);
    while(n!=0)
    {
        temp=n%10;
        sum=sum+temp;
        n=n/10;
    printf("%d ",sum);

    }

     return 0;
}
