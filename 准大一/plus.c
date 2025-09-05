#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    double i=1,j=2,l;
    double k;
    int cnt;
    double sum=0;

    for(cnt=1;cnt<=n;cnt++){
        
        k=(1.0*j)/(1.0*i);
        sum+=k;
        l=j+i;
        i=j;
        j=l;

    }
    printf("%.2f",sum);

    return 0;
}