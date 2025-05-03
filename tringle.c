#include<stdio.h>
void main()
{
    int angle1 , angle2 , angle3 , sumangle=0;
    printf(" enter the angle1 = \n angle2 = \n angle3 = \n");
    scanf("%d%d%d",&angle1,&angle2,&angle3);
    sumangle=angle1+angle2+angle3;
    if(sumangle==180)
    {
        printf(" the tringle is valid ");
    }
    else{
        printf(" the tringle is invalid");
    }
}