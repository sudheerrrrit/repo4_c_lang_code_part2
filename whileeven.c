#include<stdio.h>
void main(){
    int num;
    printf(" enter the number either 1 or 0");
    scanf("%d",&num);
    while(num)
    {
        printf("%d",num);
        num=num+2;
    }
}