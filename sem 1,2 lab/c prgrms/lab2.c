#include<stdio.h>
int main()
{
    int num,f1=0,f2=1,f3,count=0;
    printf("enter ur nmbr");
    scanf("%d",&num);
    printf("%d\n",f1);
    printf("%d\n",f2);
    count =2;
    while (count<num)
    {
        f3 = f1+f2;
        count++ ;
        printf("%d\n",f3);
        f1 = f2;
        f2 = f3;
    
    }
    return 0;
}