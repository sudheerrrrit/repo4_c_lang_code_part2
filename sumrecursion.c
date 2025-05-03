#include<stdio.h>
int rsum(int);
void main()
{
    int num , sum ;
    printf(" enter the number = ");
    scanf(" %d",&num);
    sum=rsum(num);
    printf(" the sum of %d is %d",num,sum);
    
}
int rsum(int x)
{
    int r , remender;
    if(x!=0)
    {
        remender=x%10;
        r=remender+rsum(x/10);
        return(r);
    }
}