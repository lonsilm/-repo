#include<stdio.h>

struct student
{
    int sex;       // 将 sex[1] 改为整型 sex，避免地址比较错误
    char nam[9];   // 姓名数组大小保留为9（8字符+1结束符）
};

int main(void)
{
    int n;
    scanf("%d", &n);
    struct student stu[n];
    int pair[n];   // 配对标记数组
    
    // 读取输入数据
    for (int i = 0; i < n; i++)
    {
        scanf("%d %s", &stu[i].sex, stu[i].nam); // 直接读取整型 sex
        pair[i] = 0; // 初始化未配对
    }

    // 配对逻辑
    for (int i = 0; i < n; i++)  // i 从0开始（名次最高）
    {
        if (pair[i] == 0)        // 如果当前学生未配对
        {
            for (int j = n - 1; j >= 0; j--)  // j 从最后开始（名次最低）
            {
                if (pair[j] == 0 && stu[i].sex != stu[j].sex)  // 关键修正：比较整数值而非地址
                {
                    printf("%s %s\n", stu[i].nam, stu[j].nam);
                    pair[i] = 1;  // 标记当前学生已配对
                    pair[j] = 1;  // 标记配对对象已配对
                    break;        // 找到后退出内层循环
                }
            }
        }
    }
    return 0;
}