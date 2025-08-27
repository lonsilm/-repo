#include<stdio.h>

int max(int team[],int number);

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int x;

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    max(a,n);

    return 0;
}

int max(int team[],int number)
{
    int ret;
    int j;
    int i=0;
    
    do{
        if(team[i]>=team[i-1])
        ret=team[i];
        i++;
    }while(i<number);

    for(j=0;j<number;j++){
        if(team[j]==ret)
            break;
    }

    printf("%d %d",ret,j);
    
    return 0;
}