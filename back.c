#include<stdio.h>
int main()
{
    int x,y;
    int n;
    int s=0;
    scanf("%d",&n);
    for(x=1;x<=n;x++){
        for(y=1;y<=n;y++){
            if(x*x+y*y==n){
            if(x<=y){
                printf("%d %d\n",x,y);
                s++;
            }
            }
        }
    }if(s==0){
    printf("No Solution");
    }
    return 0;
}