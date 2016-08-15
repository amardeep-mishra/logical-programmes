#include <stdio.h>
#include <stdlib.h>
void bs(int A[],int n)
{
    int i,j,t;
    for(i=0;i<=n-2;i++)
    {
    for(j=0;j<=n-2-i;j++)
    {
        if(A[j+1]<A[j])
        {
            t=A[j+1];
            A[j+1]=A[j];
            A[j]=t;
        }
    }
    }
    printf("\n the SORTED arrray is:\n");
    for(i=0;i<n;i++)
    printf("\n %d\t",A[i]);
}

int main()
{
    int i,n,A[60];
    printf("\n enter the n\n");
    scanf("%d",&n);
    printf("\n enter the elements of array\n");
    for(i=0;i<n;i++)
    scanf("%d",&A[i]);
    printf("\n the array is:\n");
    for(i=0;i<n;i++)
    printf("%d\t",A[i]);
    bs(A,n);
    return 0;
}
