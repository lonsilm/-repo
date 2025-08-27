#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);
    
    // 创建并初始化二维数组
    int trigle[size][size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            trigle[i][j] = 0;
        }
    }
    
    // 设置边界条件（每行首尾为1）
    for (int i = 0; i < size; i++) {
        trigle[i][0] = 1;  // 每行第一个元素
        trigle[i][i] = 1;  // 每行最后一个元素
    }
    
    // 计算中间元素（核心算法）
    for (int i = 2; i < size; i++) {
        for (int j = 1; j < i; j++) {
            trigle[i][j] =
            trigle[i-1][j] + trigle[i-1][j-1];
        }
    }

    for(int i=0;i<size;i++){
        int cnt=0;
        for(int j=0;j<=i;j++){
            if(trigle[i][j]!=0)
                cnt++;
            }
        for(int k=0;k<size-cnt;k++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("%d\t");
            }
        printf("\n");
    }

    return 0;
}