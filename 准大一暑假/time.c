#include<stdio.h>
int main()
{
    int N,D,U;
    scanf("%d %d %d",&N,&U,&D);
    int time=0;
    int R=0;
    while(R<=N)
    {
        R+=U;
        time++;
        if(R>=N)
        {
        printf("%d",time);
        return 0;
        }
        else{
        R-=D;
        time++;
        }
    }
    return 0;
}