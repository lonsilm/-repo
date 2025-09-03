#include<stdio.h>
int main()
{
    int M,N;
    scanf("%d %d",&M,&N);

    int A[M][N];
    int cnt=0;
    for(int i=0;i< M;i++){
        for(int j=0;j< N;j++){
            scanf("%d",&A[i][j]);
        }
    }

    for(int i=0;i< M;i++){
        for(int j=0;j< N;j++){
            if(A[i][j]>A[i+1][j] &&
               A[i][j]>A[i-1][j] &&
               A[i][j]>A[i][j+1] &&
               A[i][j]>A[i][j-1]){
                printf("%d %d %d\n",A[i][j],i+1,j+1);
                cnt++;
               }
        }
    }

    if(cnt==0)
        printf("None %d %d",M+1,N+1);
        
    return 0;
}