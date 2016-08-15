#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100],str1[100];
    int i,j,count1,count2,flag;

    printf("enter string:");
    gets(str);
    count1=strlen(str);
    count1--;  //bcoz strlen start with 1

    printf("\nenter substring:");
    gets(str1);
    count2=strlen(str1);
    count2--;

    for(i=0;i<=count1-count2;i++)
    {
        for(j=i;j<i+count2;j++)
        {
            flag=1;
            if(str[j]!=str1[j-i])
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
            break;
    }
    if(flag==1)
        printf("successful");
    else
        printf("unsuccessful");
     return 0;
}
