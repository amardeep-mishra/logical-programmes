#include <stdio.h>
#include <string.h>
//#define MAX_SIZE 100 //Maximum size of the str
int main()
{
    char str[100];
    int i, len;
    int count[26];
    printf("Enter any str: ");
    gets(str);
    len = strlen(str);
    for(i=0; i<26; i++)
    {
        count[i] = 0;
    }
    for(i=0; i<len; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            count[str[i] - 97]++;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            count[str[i] - 65]++;
        }
    }
   printf("\ncount of all characters in the given str: \n");
    for(i=0; i<26; i++)
    {
        if(count[i]!=0)
        {
            printf("%c = %d\n", (i+97), count[i]);
        }
    }
   return 0;
}
