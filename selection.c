#include <stdio.h>
#include <stdlib.h>

int main()
{ int i,j,n,temp,min,a[50];
    printf("enter the number elements:");
    scanf("%d",&n);
    printf("\nenter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
                min=j;
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    printf("sorted array is:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
