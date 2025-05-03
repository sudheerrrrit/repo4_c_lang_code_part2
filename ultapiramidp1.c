#include<stdio.h>
void main()
{
    int i , j ,k , n , l ;
    printf(" \n enter the number of rows = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=1;k<i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=n+1-i ;j++)
        {
            printf("*");
        }
        for(l=1;l<=(n-i);l++)
        {
            printf("*");
        }
        printf("\n");
    }
}