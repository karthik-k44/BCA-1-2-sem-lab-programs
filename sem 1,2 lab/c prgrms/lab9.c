#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int   i ;
    char str[100];
    printf("enter ur sentence");
    gets(str);
    printf("short form of ur sentences");
    
    for(i=0; str[i]!='\0'; i++)
    {
        if( isupper(str[i]))
        {
        printf("%c",str[i]);
        }
    }
    
    return 0;
}
