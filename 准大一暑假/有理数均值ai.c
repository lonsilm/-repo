#include <stdio.h>

// 计算最大公约数（GCD）函数，使用欧几里得算法
long long gcd(long long a, long long b) {
    if (a < 0) a = -a; // 确保a为非负数
    if (b < 0) b = -b; // 确保b为非负数
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int n;
    scanf("%d", &n); // 读取有理数的个数N
    
    long long sum_num = 0; // 初始化总和分子为0
    long long sum_den = 1; // 初始化总和分母为1
    
    for (int i = 0; i < n; i++) {
        long long num, den;
        scanf("%lld/%lld", &num, &den); // 读取每个分数的分子和分母
        
        // 处理分母为负的情况：调整符号，使分母始终为正
        if (den < 0) {
            num = -num;
            den = -den;
        }
        
        // 将当前分数加到总和中
        long long new_num = sum_num * den + num * sum_den;
        long long new_den = sum_den * den;
        
        // 计算新分数的GCD以简化
        long long g = gcd(new_num, new_den);
        if (g != 0) { // 避免除零错误
            new_num /= g;
            new_den /= g;
        }
        
        // 更新总和分子和分母
        sum_num = new_num;
        sum_den = new_den;
    }
    
    // 计算平均值：总和除以N，即分母乘以N
    long long avg_num = sum_num;
    long long avg_den = sum_den * n;
    
    // 简化平均值分数
    long long g = gcd(avg_num, avg_den);
    if (g != 0) {
        avg_num /= g;
        avg_den /= g;
    }
    
    // 输出结果
    if (avg_den == 1) {
        printf("%lld\n", avg_num); // 分母为1，只输出分子
    } else {
        printf("%lld/%lld\n", avg_num, avg_den); // 输出分数形式
    }
    
    return 0;
}
//主要用于与自己的学习做对照，太晚了，明天一定得好好写代码
//--9.2 1：25