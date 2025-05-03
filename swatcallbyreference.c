#include<stdio.h>
void swap (int* , int*);
void main()
{
    int a , b ;
    printf("a= , b= ");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
}
void swap (int*x , int*y)
{
    int t ;
    t=*x;
    *x=*y;
    *y=t;
    printf("\n the swapeed number are %d abd %d",*x , *y);
}