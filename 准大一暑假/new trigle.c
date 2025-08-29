#include<stdio.h>

int main(void)
{
    int size;
    scanf("%d", &size);
    int trigle[size][size];

    //做一个数组初始化
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            trigle[i][j]=0;
        }
    }
    //将杨辉三角的第一特征描述（第一列全为一），方便之后的中间计算
    for(int i=0;i<size;i++){
        trigle[i][0]=1;
        trigle[i][i]=1;
    }
    //通过观察用算式表达杨辉三角内的其他数
     for(int i=2;i<size;i++){
        for(int j=1;j<i;j++){
            trigle[i][j]=trigle[i-1][j]+trigle[i-1][j-1];
        }
    }
   /*/ //测试用
     for(int i=0;i<size;i++){
        for(int j=0;j<=i;j++){
            printf("%d", trigle[i][j]);
            if(j<i)
            printf("\t");
        }
        printf("\n");
    }*/
   for(int i=0;i<size;i++){
        for(int k=0;k<=size-i;k++){
            printf("  ");
        }
        for(int j=0;j<=i;j++){
            printf("%d", trigle[i][j]);
            if(j<i){
                if(trigle[i][j+1]<10){
                    for(int k=0;k<=3;k++){
                    printf(" ");
                    }
                }
                else if(trigle[i][j+1]>=10 && trigle[i][j+1]<100){
                    for(int k=0;k<=2;k++){
                        printf(" ");
                }
                }
                else if(trigle[i][j+1]>=100 && trigle[i][j+1]<1000){
                for(int k=0;k<=1;k++){
                    printf(" ");
            }
            }
            }

        }
        printf("\n");
    }

    return 0;
}
/* 我认为我尽力了，可PTA就是在否定我的答案
我也不在乎了，因为这个代码确实能输出完美的杨辉三角 */