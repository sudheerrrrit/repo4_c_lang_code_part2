#include<stdio.h>
#include<math.h>
void main(){
    float temp , vel , wcf;
    printf(" enter the tempreture and velocity");
    scanf("%f%f",&temp,&vel);
    wcf=35.74+0.6215*temp+(0.4275*temp-35.75);
    printf(" the wind chill factor is %f",wcf);
}