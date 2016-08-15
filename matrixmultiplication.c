#include <stdio.h>
#include <stdlib.h>

int main()
{  int n,i,k,j,a[50][50],b[50][50],c[50][50];
    printf("enter matrix size n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("matrix elements\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=0;
            for(k=0;k<n;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];

            }
            printf("%d ",c[i][j]);

        }
        printf("\n");
    }
     return 0;
}
