#include<stdio.h>
int main()
{
    int w;
    scanf("%d",&w);
    if(0<=w<=6){
        if(w=0)
            printf("Sunday");
        else if(w=1)
            printf("Monday");
        else if(w=2)
            printf("Tuesday");
        else if(w=3)
            printf("Wednesday");
        else if(w=4)
            printf("Thursday");
        else if(w=5)
            printf("Friday");
        else if(w=6)
            printf("Saturday");
    }
    else
        printf("None");
    return 0;
}