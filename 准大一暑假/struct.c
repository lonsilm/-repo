#include<stdio.h>
#define MAXN 100
struct student{
  char name[20];
  int score;
};
void cnt_score( struct student *p, int n );

int main()
{   
  int i, n;
  struct student stu[MAXN];

  scanf("%d", &n);
  for(i = 0; i < n; i++){
    scanf("%s%d", stu[i].name, &stu[i].score);
  } 
  cnt_score(stu, n);

  return 0;
}

void cnt_score(struct student *p, int n)
{
    int cnt_a = 0, cnt_p = 0, cnt_f = 0;
    struct student *q = p + n; // 定义结束指针（2分）
    while (p < q) { // 修改循环条件，避免越界（2分）
        if (p->score >= 80 && p->score<=100) // 判断优秀（A）（3分）
            cnt_a++;
        else if (p->score >= 60) // 判断及格（P）（3分）
            cnt_p++;
        else // 不及格（F）（2分）
            cnt_f++;
        p++;
    }
    printf("%d %d %d\n", cnt_a, cnt_p, cnt_f);
}