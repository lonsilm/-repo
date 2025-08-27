#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
   srand(time(0));
    int s=rand()%100+1;
    int count=1;
    int x;
    printf("Please try\n");
    scanf("%d",&x);
    while(x!=s){
        if(x>s){
            printf("Your number is more.Please retry.\n");
            scanf("%d",&x);
        }else{
            printf("Your number is less.Please retry.\n");
            scanf("%d",&x);
        }count++;
    }
    printf("Your number is correct.You just try %d times\nClick any bottom out of game",count);
    scanf("%d",x);

    return 0;
}