#include<stdio.h>

struct student{
    char num[6];
    char nam[11];
    int scor1;
    int scor2;
    int scor3;
    int score;
};


void sort( struct student stu[], int n );

int main(void)
{
    int n;
    scanf("%d",&n);

     struct student stu[n];
     for(int i=0;i<n;i++){

        scanf("%s %s %d %d %d"
        ,stu[i].num,stu[i].nam
        ,&stu[i].scor1,&stu[i].scor2
        ,&stu[i].scor3);

        stu[i].score=
        stu[i].scor1+stu[i].scor2+stu[i].scor3;

     }

     sort(stu,n);
     
     printf("%s %s %d",stu[n-1].nam,stu[n-1].num,stu[n-1].score);

     return 0;

}   

void sort(struct student stu[], int n) {
    for (int i = 0; i < n - 1; i++) {

        for (int j = 0; j < n - i - 1; j++) {

            if (stu[j].score > stu[j+1].score) {

                struct student temp = stu[j];
                stu[j] = stu[j+1];
                stu[j+1] = temp;

            }
        }
    }
}