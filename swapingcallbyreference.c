#include<stdio.h>
void swap (int* , int*);
void main()
{
    int num1 , num2 ; 
    printf(" enter the value of num1 amd num2 ");
    scanf("%d%d",&num1 ,&num2);
    swap(&num1 , &num2);
    printf(" after the callinmg of fnction the value of num1 and num2 is %d and %d" , num1 , num2);

}
void swap (int *x , int *y)
{
    int t ;
    t = *x ; 
    *x= *y ;
    *y = t;
    printf(" the swapped num is %d and %d", *x , *y) ;

}