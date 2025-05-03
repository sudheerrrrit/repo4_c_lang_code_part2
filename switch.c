#include<stdio.h>
void main(){
    int i;
    printf(" enter the value of i");
    scanf("%d",&i);
    switch(i){
        case 1: printf(" you enter the 1");
        break;
        case 2: printf(" you enter the 2");
        break;
        case 3: printf(" ypu enter three");
        break;
        default:
        printf(" wrong input");
    }
}