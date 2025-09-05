#include <stdio.h>
#include <string.h>

int main(void) {
    char a[100001];
    char b[100001];
    
    // 使用fgets安全读取输入，包括可能存在的空格
    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);
    
    // 移除fgets可能读取的换行符
    a[strcspn(a, "\n")] = '\0';
    b[strcspn(b, "\n")] = '\0';
    
    int lena = strlen(a);
    int lenb = strlen(b);
    
    // 边界情况处理：如果b是空串或b比a长，则无法匹配
    if (lenb == 0) {
        printf("Pattern is empty.\n");
        return 0;
    }
    if (lenb > lena) {
        printf("Pattern longer than text. No match possible.\n");
        return 0;
    }
    
    int found = 0; // 用于标记是否至少找到一个匹配
    
    // 修正循环条件：i <= lena - lenb
    for (int i = 0; i <= lena - lenb; i++) {
        int j;
        for (j = 0; j < lenb; j++) {
            if (a[i + j] != b[j]) {
                break; // 发现不匹配字符，跳出内层循环
            }
        }
        // 如果内层循环完整执行完毕 (j == lenb)，说明找到一个完全匹配
        if (j == lenb) {
            printf("%d\n", i); // 输出匹配的起始索引
            found = 1; // 标记已找到
        }
    }
    
    if (!found) {
        printf("No match found.\n");
    }
    
    return 0;
}