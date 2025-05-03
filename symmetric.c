#include<stdio.h>
void main()
{
    int i , j , a[3][3] , count=0;
    printf("\n enter the elements of matrix ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n the entered matrix is \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }

for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        if(a[i][j]==a[j][i])
        count++;
    }  
}
if(count==9)
printf("\n\n the entered matrix is symmetric \n");
else
printf(" \n\nnot symmetric");
}