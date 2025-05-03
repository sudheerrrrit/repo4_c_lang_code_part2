#include<stdio.h>
void main(){
    int a , b , c ; 
    printf(" enter the value of a and b ");
    scanf(" %d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf(" now thw nuber a = %d amd b = %d",a , b);

}