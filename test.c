#include<stdio.h>

int isprime(int x,int knownprimes[],int numberofknownprimes);

int main()
{
    const int number=100;
    int prime[number]={2};
    int cnt=1;
    int i=3;
   
    while(cnt<number){

        if( isprime(i,prime,cnt) )
        prime[cnt++]=i;

        i++;
    }
    for(int j=0;j<number;j++){
        printf("%d\t",prime[j]);
        if((j+1)%10==0)
        printf("\n");
    }
        
    return 0;
}

int isprime(int x,int knownprimes[],int numberofknownprimes)
{
    int ret=1;
    int i=0;

    for(;i<numberofknownprimes;i++){
        if(x%knownprimes[i]==0){
        ret=0;
        break;
        }

    }


    return ret;
}
