#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    float result=0,i;
    printf("enter ur nmbr of terms \n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        result+=pow((1/i),i);
    }
        printf(" \n sum of the number in series %d is %.5f",n,result );
    
    return 0;
}