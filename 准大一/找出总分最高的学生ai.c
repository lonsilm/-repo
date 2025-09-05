#include<stdio.h>

// 先声明结构体和函数原型
struct student {
    char num[6];
    char nam[11];
    int scor1;
    int scor2;
    int scor3;
    int score;
};

void sort(struct student stu[], int n);

int main(void) {
    int n;
    scanf("%d", &n);
    
    struct student stu[n];
    for (int i = 0; i < n; i++) {
        // 读取输入，注意为整型字段添加&
        scanf("%s %s %d %d %d", 
              stu[i].num, stu[i].nam, 
              &stu[i].scor1, &stu[i].scor2, &stu[i].scor3);
        // 计算总分
        stu[i].score = stu[i].scor1 + stu[i].scor2 + stu[i].scor3;
    }
    
    sort(stu, n); // 正确传递整个数组
    
    // 输出总分最高的学生（排序后最后一个元素）
    printf("%s %s %d\n", stu[n-1].nam, stu[n-1].num, stu[n-1].score);
    
    return 0;
}

// 冒泡排序函数，交换整个结构体
void sort(struct student stu[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (stu[j].score > stu[j+1].score) {
                // 交换整个结构体，而不仅仅是score字段
                struct student temp = stu[j];
                stu[j] = stu[j+1];
                stu[j+1] = temp;
            }
        }
    }
}
//学习用，提交使用的是自己写的