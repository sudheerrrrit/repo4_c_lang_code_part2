#include<stdio.h>
void main(){
long int num , sum=0;
printf(" enter the five diGIT NUMBER ");
scanf(" %ld",&num);
sum=sum+num%10;
num=num/10;
sum=sum+num%10;
num=num/10;
sum=sum+num%10;
num=num/10;
sum=sum+num%10;
num=num/10;
sum=sum+num;
printf(" the sum of num is %ld",sum);
}