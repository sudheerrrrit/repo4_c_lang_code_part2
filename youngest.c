#include<stdio.h>
void main()
{
    int r , s , a , young;//r = ram,s= shyam,a=ajay
    printf(" enter the age of ram , shayam and ajay");
    scanf("%d%d%d",&r,&s,&a);
    if(r<s)
    {
        if(r<a)
        {
            printf(" ram is youngest in all and the age is %d",r);
        }
        else
        {
            printf(" ajay is youngest in all and the age is %d",a);

        }
    }
    else
    {
        printf(" shyam is youngest in all nd the age is %d",s);
    }
}