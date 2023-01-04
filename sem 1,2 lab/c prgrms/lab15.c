#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,num;
    FILE *fp1,*fp2;
    fp1 = fopen ("odd.text","w");
    fp2 = fopen("even.text","w");
    printf("number of element ");
    scanf("%d", &n);
    printf ("enter ur array");
    for (i=0; i<n; i++)
    {
    scanf("%d", &num);
    if(num%2==0)
    {
        fprintf(fp2,"\t%d",num);
    }
    else
    {
        fprintf(fp1,"\t%d",num);
    }
    fclose(fp1);
    fclose(fp2);
     
    printf("\n contents of file 'even.tx'");
    fp1= fopen("even.txt","r");
    while (!feof(fp1))
    {
        fscanf (fp1,"%d", &num);
        printf("\n%d",num);
    }
    printf("/n Contents of file 'eve.tx'");

    fp1=fopen ("odd.txt","r");
    while (!feof(fp2))
    {
        fscanf(fp2, "%d", &num);
        printf("\n%d", num);
    }
    fclose(fp1);
    fclose(fp2);
    
    }
    return 0;
}