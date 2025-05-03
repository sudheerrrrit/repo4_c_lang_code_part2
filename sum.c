#include<stdio.h> 
void main()
{
    int sum=0 , i , num;
    printf(" enter the value of number");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        sum=sum+i;
    }
    printf(" the sum of %d number is %d",num,sum);
}