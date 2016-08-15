#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[100],i,j,k,size;
    printf("enter size:");
    scanf("%d",&size);
    printf("\nenter elements:");
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);

    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(a[i]==a[j])
            {
                for(k=j;k<size;k++)
                {
                    a[k]=a[k+1];
                }
                size--;
                j--;
            }
        }
    }
    printf("\nelements without duplication:" );
    for(i=0;i<size;i++)
    printf("%d\t",a[i]);
    return 0;
}
