#include<stdio.h>

struct student
{
    int sex;
    char nam[9];
};


int main(void)
{
    //基本的写数据
    int n;
    scanf("%d",&n);
    struct student stu[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d %s",&stu[i].sex,stu[i].nam);
    }

    int pair[n];
    for(int i=0;i<n;i++)
    {
        pair[i]=0;
    }

    //分配
    for(int i=0;i<n;i++)
    {
        if(pair[i]==0){
            for(int j=n-1;j>=0;j--){
                if(pair[j]==0){
                    if(stu[i].sex!=stu[j].sex){
                    printf("%s %s\n",stu[i].nam,stu[j].nam);
                    pair[i]=1;
                    pair[j]=1;
                    break;
                    }
                }
            }
        }
    }

    return 0;
}