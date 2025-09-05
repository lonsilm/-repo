#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int cnt=0;
    int sum=0;

    for(int i=n;i<=m;i++){
        int isPrime=1;
        for(int j=2;j<i;j++){
            if(i%j==0){

            
            isPrime=0;
            break;
            }
        }

        if(isPrime==1){
            cnt++;
            sum+=i;
        }

    }
    printf("%d %d",cnt,sum);
    scanf("%d",&sum);

    return 0;
}