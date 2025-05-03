#include<stdio.h>
void main()
{
    int sum=0 , num , i ;
    float avg=0;
    printf(" enter the number");
    scanf(" %d",&num);
    for(i=1;i<=num;i++)
    {
        sum=sum+i;
    }
    printf(" the sum of %d natural number is %d\n",num,sum);
    avg=sum/10.0;//10 can be replace by the total term in the program
    printf(" the average of %d natural number is %f",num,avg);
    

}