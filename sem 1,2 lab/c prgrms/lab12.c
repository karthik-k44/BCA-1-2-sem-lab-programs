#include<stdio.h>
#include<math.h>
int factorial(int a)
{
if (a==1)
return a;
return a *factorial(a-1);
}

int main()
{
 int n;
 printf("enter ur nmbr ");
 scanf("%d",&n);
 printf("%d!=%d", n, factorial(n));
 return 0;
}
