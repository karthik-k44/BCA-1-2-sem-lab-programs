#include<stdio.h>
int main()
{
    char s[100];
    int i, count=1; 
    printf("enter ur sentence"); 
    gets(s);
    if (s[i]!=0)
    {
        for (i=0; s[i]!= '\0'; i++)
        {
            if (s[i] == ' ')
            count ++ ;
        }
    }
    printf("no of words %d", count);
    return 0;
}