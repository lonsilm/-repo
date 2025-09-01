#include<stdio.h>

int main(void)
{   //定义该有理数的个数
    int n=0;
    scanf("%d",&n);
    
    //初始化数组a,b
    int a[n];
    for(int i=0;i<n;i++){
        a[i]=0;
    }
    int b[n];
    for(int i=0;i<n;i++){
        b[i]=0;
    }

    //尝试去读数组里的数
    for(int i=0;i<n;i++){
        scanf("%d/%d",&a[i],&b[i]);
    }


    int kids=0;
    int chd=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            chd=a[i];
            if(j!=i)
            chd=chd*b[j];
        }
        kids+=chd;
    }
    printf("%d\n",kids);
    return 0;
}