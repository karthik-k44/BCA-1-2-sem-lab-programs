#include<stdio.h>
#include<string.h>

int main()
{
    int n, i, j, len ;
     char str[20];
     printf("enter ur nmbr");
     scanf("%d",&n);
     printf(str,"%d",n );
     len = strlen(str);
       for(i=0; i<len; i++)
     {
          for (j=i; j<len; j++)
          {
          printf("%d",str[j]);
          printf("\n");
          }
          
     }
    
     return 0;
}