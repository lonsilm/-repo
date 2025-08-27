#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    int i=0;
    scanf("%d",&x);
    int t=x;
    do{
        i++;
        x/=10;
    }while(x>0);
    i--;
    do{
        int a=pow(10,i);
        int d=t/a;
        printf("%d",d);
        if (i>0)
        printf(" ");
        i--;
        t%=a;
    }while( i>=0);
          
    return 0;
}