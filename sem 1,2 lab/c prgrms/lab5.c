#include<stdio.h>
int main()
{
    int n, i, flag=0;
    printf("enter ur number");
    scanf("%d",&n);
    if(n==1)
    {
        printf("neither prime nor compopstie");
    }
    for(i=2; i<=n/2; i++)
    {
        if (n%i==0)
        {
            flag=1;
            break ;
        }
    }
    if (flag==1)
    {
        printf("its not a prime ");
    }
    else
    {
        printf("its prime");
    }
    return 0;
}