#include<stdio.h>
void main()
{
    int l1 ,l2 , l3 ;//l means length
    printf(" enter the length of tringle l1 , l2 , l3");
    scanf("%d%d%d",&l1,&l2,&l3);
    
    if((l1+l2)>l3)
    printf(" the tringle is valid");
    else
    printf(" the tringle is invalid");

}