#include<stdio.h>
void main(){
    int a , b ;
    printf(" enter the value of a and b ");
    scanf("%d%d",&a,&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf(" now the a is %d and b is %d",a ,b);
}