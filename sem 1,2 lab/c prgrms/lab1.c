#include<stdio.h>
#include<conio.h>
void main()
{
    int d,num,rev =0, sum =0;
 
    printf("enter ur nmbr");
    scanf("%d",&num);
    while(num>0)
    {
        d=num%10;
        num/=10;
        sum+=d;
        rev=rev*10+d;
    }
    printf("sum %d\n",sum);
    printf("rev %d",rev);

   getch();
}