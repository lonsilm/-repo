#include<stdio.h>
int main()
{
    int a=9;
    int b=3;    

    printf("%p\n",&a);
    int *p=&a;
    printf("%p\n",p);
    *p=8;
    printf("%d %x\n   ",a,p);

    const int *q=&b;
    printf("%d\n",*q);
    b=9;
    printf("%d\n",*q);

    return 0;
}