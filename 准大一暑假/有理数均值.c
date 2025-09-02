#include<stdio.h>

//接口
int maxdivisor(long long  a,long long  b);

int main(void)
{
    //定义该有理数的个数
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

    //求最后的分母
    /*int mothr=1;
    for(int i=0;i<n;i++){
        mothr*=b[i];
    }*/
    //printf("%d\n",mothr);
    //有点无语：-（

    //求最后的分子
    /*int kids=0;
    int chd=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            chd=a[i];
            if(j!=i)
            chd*=b[j];
        }
        kids+=chd;
    }*/
    //printf("%d\n",kids);
    //该段错误：-（

    //下面抄deep seek的
    long long sum_num = 0; // 累加结果的分子
    long long sum_den = 1; // 累加结果的分母
    long long mothre ;
    long long kidse;
    
    for (int i = 0; i < n; i++) {
        // 通分并相加
        mothre = sum_den * b[i];
        kidse= sum_num * b[i] + a[i] * sum_den;
    }
    //检测用
    printf("%d\n",mothre);
    printf("%d\n",kidse);
    

    //化简最后的分数，和例外情况的讨论
    long long  kidsq=kidse/maxdivisor(kidse,mothre);
    long long  mothrq=mothre/maxdivisor(kidse,mothre);

    long long   kids=kidsq;
    long long mothr=mothrq*n;

    if(kids<0)
    {
        kids=-kids;
    if(maxdivisor(kids,mothr)!=0){
        long  kid =kids/(maxdivisor(kids,mothr));
        long mthr =mothr/(maxdivisor(kids,mothr));
        if(mthr==1){
            printf("-%d",kid);
        }
        else{
            printf("-%d/%d",kid,mthr);
        }
    }
    else
    printf("-%d/%d",kids,mothr);
    }
    else{
        if(maxdivisor(kids,mothr)!=0){
        int kid =kids/(maxdivisor(kids,mothr));
        int mthr =mothr/(maxdivisor(kids,mothr));
        if(mthr==1){
            printf("%d",kid);
        }
        else{
            printf("%d/%d",kid,mthr);
        }
    }
    else
    printf("%d/%d",kids,mothr);
    }


    return 0;
}

//最大公约数的函数
int maxdivisor(long long  a,long long  b)
{
    int ret=0;
    int i=1;
    while(i<a || i<b){

        if(a%i==0 && b%i==0)
        ret=i;

        i++;
    }
    return ret;
}
//mad，等会再看