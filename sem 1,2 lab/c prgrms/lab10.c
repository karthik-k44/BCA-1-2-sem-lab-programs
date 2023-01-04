#include<stdio.h>
int main()
{
    int amt;
    int  n500, n100, n50, n20, n10;
    printf("enter ur amount ");
    scanf("%d",&amt);
    if (amt>= 500)
    {
        n500= amt/500;
        amt-=n500*500;
    }
     if (amt>= 100)
    {
        n500= amt/100;
        amt-=n100*100;
    }
    
     if (amt>= 50)
    {
        n50= amt/50;
        amt-=n50*50;
    }
     if (amt>= 500)
    {
        n20= amt/20;
        amt-=n20*20;
    }
     if (amt>= 10)
    {
        n10= amt/10;
        amt-=n10*10;
    }
    printf("total numbers of notes\n ");
    printf("500 = %d \n",n500);
    printf("100 = %d\n",n100);
    printf("50 = %d\n",n50);
    printf("20 = %d\n",n20);
    printf("10 = %d\n",n10);
   return 0; 
}