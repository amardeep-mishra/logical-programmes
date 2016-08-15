//check divisiblee by 7
#include <stdio.h>
#include <stdlib.h>
int main()
{  int n,i;
    printf("enter range");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i%7==0)
        {
            printf("\n%d is divisible by 7",i);
        }
    }
    return 0;
}


/* execute in pattern
0
1 1
2 3 5 
8 13 21 34 */
#include <stdio.h>
#include <stdlib.h>
int main()
{  int i,j,temp,p=0,q=1,k=1;
   for(i=0;i<4;i++)
   {
       for(j=0;j<k;j++)
       {
           printf("%d ",p);
           temp=p+q;
           p=q;
           q=temp;
       }
       printf("\n");
       k++;
   }
    return 0;
}


//remove duplicate and print
//Input:aAbBbC
//Output:aABC
#include <stdio.h>
#include <stdlib.h>
int main()
{
   char str[20];
   int i,j,n,k,p;
   printf("enter string");
   gets(str);
   n=strlen(str);
   for(i=0;i<n;i++)
   {  k=0;
       for(j=0;j<n;j++)
       {
          if(str[i]==str[j])
           {
               k++;
           }
       } //if its repeat then k value greater than 1
         if(k==1)
           {
               printf("%c",str[i]);
           }
   }
    return 0;
}


//find prime number in the given range 
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j=2,k,n;
    printf("enter the range of prime number:\t");
    scanf("%d",&n);
    while(j<=n)
    {
        k=1;
        for(i=2;i<j;i++)
        {
            if(j%i==0)
            {
            k=0;
            }
        }
        if(k)
        {
        printf("%d \t",j);
        }
    j++;
    }

    return 0;
}


//sort in descending order
#include <stdio.h>
#include <stdlib.h>
int main()
{
   int a[10],i,j,n,temp;
   printf("enter n value");
   scanf("%d",&n);
   printf("\nenter number");
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
           if(a[i]<a[j])
           {
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
           }
       }
   }
   printf("\nAfter sorting");
   for(i=0;i<n;i++)
   {
       printf("%d ",a[i]);
   }

    return 0;
}


//print the pattern 1 2 3 6 7 11 12 17 18
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int i,k=1,j=1;
  printf("%d ",k);
  for(i=0;i<4;i++)
  {
        k++;
        printf("%d ",k);
        k++;
        printf("%d ",k);
        j++;
        k=k+j;
   }
    return 0;
}


/*input:AMAR
Output:
RAMA
ARAM
MARA
AMAR
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[20];
    int i,p,q,n,k,j;
    printf("enter string");
    gets(str);
    n=strlen(str);
    j=n-1;
    printf("enter the number for circular fashion");
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        for(p=j;p<n;p++)
        {
            printf("%c",str[p]);
        }
        for(q=0;q<j;q++)
        {
            printf("%c",str[q]);
        }
    j--;
    printf("\n");
    }
    return 0;
}


//print pattern
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int i,j,k,l,p,q;
  p=5;
  q=0;
  for(i=0;i<5;i++)
  {
      for(k=0;k<q;k++)
      {
          printf(" ");
      }
      for(j=0;j<p;j++)
      {
          printf("%c",j+65);
      }
      for(k=0;k<q;k++)
      {
          printf(" ");
      }
      for(l=p-1;l>=0;l--)
      {
          printf("%c",l+65);
      }
      p--;
      q++;
      printf("\n");
  }


  return 0;
}
