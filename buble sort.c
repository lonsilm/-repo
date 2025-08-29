#include<stdio.h>

void sort(int a[],int n);

int main(void)
{int i, n;
   
    
    scanf("%d", &n);
     int a[n];
     for( i=0; i<n; i++ )
        scanf("%d", &a[i]);

    sort(a, n);

    printf("After sorted the array is:");
    //for( i = 0; i < n; i++ )
        printf(" %d", a[n-1]);
    printf("\n");

        
    return 0;
}

void sort(int a[],int n)
{
    for(int i=0;i<n-1;i++){
        int swap=0;
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                swap=a[j+1];
                a[j+1]=a[j];
                a[j]=swap;

            }

        }
    }
}