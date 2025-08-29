#include<stdio.h>
#include<stdlib.h>

/*int main()
{
    int n=0;
    scanf("%d",&n);
    int *a;
    a=(int*)malloc(n*sizeof(int));

     for(int i=0;i<n;i++){
        
        scanf("%d",&a[i]);
    }

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

    for(int i=0;i<n;i++){
        
        printf("%d",a[i]);
        if(i<n-1)
        printf(" ");
    }

    return 0;
}*/
//以上是利用动态数组来进行冒泡排序的
//下面是用动态数组进行倒序输出的
int main(void)
{
    int n=0;
    scanf("%d",&n);
    int *a=(int*)malloc(n*sizeof(int));

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(int i=1;i<=n;i++){
        printf("%d",a[n-i]);
        if(i<n)
        printf(" ");
    }

    return 0;
}
