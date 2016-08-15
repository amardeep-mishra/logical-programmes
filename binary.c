#include <stdio.h>
#include <stdlib.h>

int binsearch(int a[],int key, int low,int high)
{
    int mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key==a[mid])
        return mid;
        else if(key<a[mid])
        high=mid-1;
        else low=mid+1;
    }
    return (-1);
}
int main()
{
    int n,i,a[100],pos,key;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the key:\n");
    scanf("%d",&key);
    pos=binsearch(a,key,0,n-1);
    if(pos==-1)
    printf("Element not found!!");
    else
    printf("Element found at position %d",pos+1);
    return 0;
}
