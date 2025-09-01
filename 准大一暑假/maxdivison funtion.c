#include<stdio.h>

//接口
int maxdivisor(int a,int b);

int main(void){
    int a,b;
    scanf("%d %d",&a,&b);
    int i= maxdivisor(a,b);
    printf("%d",i);
    return 0;
}

int maxdivisor(int a,int b)
{
    int ret=0;
    int i=1;
    while(i<a || i<b){

        if(a%i==0 && b%i==0)
        ret=i;

        i++;
    }
    return ret;
}