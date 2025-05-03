#include<stdio.h>
#include<string.h>
void main()
{
    char str1[30] , str2[15];
    printf("\n enter the string 1 : ");
    gets(str1);
    printf(" \n");

printf("\n enter the string 2 : ");
        gets(str2);
        strcat(str1,str2);
        printf(" the requaired string is %s",str1);
        



}