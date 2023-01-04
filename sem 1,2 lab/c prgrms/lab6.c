#include<stdio.h>
int main()
{
    int a[3][3], row, col, i, j;
    printf ("enter ur row");
    scanf("%d",&row);
    printf ("enter ur column");
    scanf("%d",&col);
    printf("enter ur matrix");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        scanf("%d",&a[i][j]);
    }
    printf("transpose of ur matrix \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        printf("%d ", a[j][i]);
         printf("\n");
    }
   
    return 0;
}