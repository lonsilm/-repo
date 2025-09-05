#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            int sum=i*j;
            printf("%d*%d=%d",j,i,sum);
            if(sum<10)
            printf("   ");
            else if (sum>=10)
            {
                printf("  ");
            }
            

        }
        printf("\n");
    }
    return 0;
}