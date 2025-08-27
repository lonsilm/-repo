#include<stdio.h>
int main()
{
    int a,b;
    int t;
    scanf("%d/%d",&a,&b);
    int m=a;
    int n=b;
    do{
        if(b==0)
        break;
        else{
            t=a%b;
            a=b;
            b=t;
        }
    }while(a!=1);
    int max=a;
    m/=max;
    n/=max;
    printf("%d/%d",m,n);
    return 0;
}