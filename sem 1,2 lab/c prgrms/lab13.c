#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int len, i;
    char str[30];
    printf("enter ur string ");
    gets(str);
    len= strlen(str);
    for( i=0; i<len/2; i++)
    {
        if(str[i]!=str[len-1-i])
        {
            printf("not palindrome ");
            return 0;
        }
    }
    printf("palindrome ");
    return 0;     
}