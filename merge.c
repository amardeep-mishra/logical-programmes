#include <stdio.h>
#include <stdlib.h>
#include<sys/time.h>
void merge(int b[],int p,int c[],int q,int a[])
{
    int i,j, k,x;
    k=0;i=0;j=0;
    while((i<p)&&(j<q))
    {
        if(b[i]<c[j])
        {
            a[k]=b[i];
            i++;
        }
        else
        {
            a[k]=c[j];
            j++;
        }
    k++;
    }
    if(i==p)
    {
        for(x=j;x<q;x++,k++)
        a[k]=c[x];
    }
    else
    {
         for(x=i;x<p;x++,k++)
        a[k]=b[x];
    }

    }
void mergesort( int a[],int n)
{
   int p=0,q=0,i,j,c[60],b[60];
    if(n>1)
    {
    for(i=0;i<n/2;i++)
    {
        b[i]=a[i];
        p++;
    }
    j=0;
    for(i=n/2;i<n;i++)
    {
        c[j]=a[i];
        j++;
        q++;
    }
    mergesort(b,p);
    mergesort(c,q);
    merge(b,p,c,q,a);
   }
}
int main()
{
    int n,i,a[60];
    printf("\n enter the n\n");
    scanf("%d",&n);
    printf("\n  enter teh array\n");
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }

    mergesort(a,n);

    printf("\n the sorted array is\n");
    for(i=0;i<n;i++)
    {
       printf("\n %d\n",a[i]);
    }
}
