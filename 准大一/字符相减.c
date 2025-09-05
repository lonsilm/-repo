#include<stdio.h>
#include<string.h>

int main(void)
{
    char a[10001];
    char b[10001];
    fgets(a,sizeof(a),stdin);
    fgets(b,sizeof(b),stdin);
    // 移除换行符（fgets 会读取换行符，需要移除）
    a[strcspn(a, "\n")] = '\0';
    b[strcspn(b, "\n")] = '\0';

    int lena=strlen(a);
    int lenb=strlen(b);
    int i=0;
    while(i<lena){
        int f=0;
        for(int j=0;j<lenb;j++){
            if(a[i]==b[j]){
                f=1;
                break;
            }
        }
        if(f){
            for(int n=i;n<lena;n++){
                a[n]=a[n+1];
            }
            lena--;

        }else{
            i++;
        }

    }
    a[lena]=0;
    printf("%s",a);

    return 0;
}