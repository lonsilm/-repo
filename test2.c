#include<stdio.h>

int main()
{
    const int n=100;
    int prime[n];
    int cnt=0;

    for(int i=0;i<n;i++){
        prime[i]=1;
    }

    for(int x=2;x<n;x++){

        if(prime[x]){
            for(int i=2;x*i<n;i++){
                prime[x*i]=0;
            }

        }
    }

    {
        for(int j=2;j<n;j++){
            int cnt=1;

            if(prime[j]==1){
            printf("%d\t",j);
            }

            cnt++;
            if((cnt-1)%2==0)
            printf("\n");
        }

    }
    

    
    return 0;
}