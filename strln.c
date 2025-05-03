#include<stdio.h>
#include<string.h>
void main()
{
    char str1[25];
    int l;

    printf("\n enter your name : ");
    gets(str1);
    l = strlen(str1);
    printf("\n the length of string is %d",l);
}
