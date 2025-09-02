#include<stdio.h>

struct line{    
    long bir;
    char nam[11];
    char num[19];

};


void sort( struct line user[], int n );

int main(void)
{
    int n;
    scanf("%d",&n);
    struct line user[n];
    for(int i=0;i<n;i++)
    {
        scanf("%s %ld %s",user[i].nam,&user[i].bir,user[i].num);
    }

    sort(user,n);

    for(int i=0;i<n;i++){
        printf("%s %ld %s\n",user[i].nam,user[i].bir,user[i].num);
    }

    return 0;
}

void sort(struct line user[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (user[j].bir > user[j+1].bir) {
                struct line temp = user[j];
                user[j] = user[j+1];
                user[j+1] = temp;
            }
        }
    }
}