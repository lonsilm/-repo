#include<stdio.h>
int main()
{int weight;
int money;
scanf("%d",&weight);

if(weight<=10)
money=0;

if(weight>10 && weight<=20)
money=2*weight;

if(weight>20)
money=3*weight;

printf("%d",money);

return 0;
}