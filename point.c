#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int point[n];
    for(int i=0;i<n;i++){
        scanf("%d",&point[i]);
    }

    int cnt[11];
    for(int i=0;i<11;i++){
        cnt[i]=0;
    }
    
    for(int i=0;i<n;i++){
            if (point[i] >= 0 && point[i] < 10) {
            cnt[0]++;
        } else if (point[i] >= 10 && point[i] < 20) {
            cnt[1]++;
        } else if (point[i] >= 20 && point[i] < 30) {
            cnt[2]++;
        } else if (point[i] >= 30 && point[i] < 40) {
            cnt[3]++;
        } else if (point[i] >= 40 && point[i] < 50) {
            cnt[4]++;
        } else if (point[i] >= 50 && point[i] < 60) {
            cnt[5]++;
        } else if (point[i] >= 60 && point[i] < 70) {
            cnt[6]++;
        } else if (point[i] >= 70 && point[i] < 80) {
            cnt[7]++;
        } else if (point[i] >= 80 && point[i] < 90) {
            cnt[8]++;
        } else if (point[i] >= 90 && point[i] < 100) {
            cnt[9]++;
        } else if (point[i] == 100) {
            cnt[10]++;
        } else {
            continue;
        }
    }
    for(int j=0;j<11;j++){
        printf("%d: %d",j,cnt[j]);
        if(j!=10)
            printf("\n");
    }
    
    return 0;
}