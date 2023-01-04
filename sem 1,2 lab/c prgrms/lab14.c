#include<stdio.h>
int main()
{
    int year;
    printf("Enter ur year");
    scanf("%d",&year);
    if ((year % 100 == 0 && year % 400 ==0 ) || ( year % 4 ==0))
    { 
    printf("it is an leap year");
    }
    else
    {
     printf("its not a leap year");
    }
    return 0;
}