#include<stdio.h>
void main()
{
    int i , j ,a;
    for(i=1;i<=3;i++)
    {
        a=1;
        for(j=1;j<=i;j++)
        {
            printf("\t#");
        }
        a++;
        printf("\n");
    }
}