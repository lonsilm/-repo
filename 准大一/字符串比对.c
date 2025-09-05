#include<stdio.h>
#include<string.h>

int main(void)
{
    char a[100001];
    char b[100001];
    //scanf("%s",a);
    //scanf("%s",b);
    fgets(a,sizeof(a),stdin);
    fgets(b,sizeof(b),stdin);

    a[strcspn(a, "\n")] = '\0';
    b[strcspn(b, "\n")] = '\0';

    int lena=strlen(a);
    int lenb=strlen(b);

    //字符串对比
    for(int i=0;i<=lena-lenb;i++){
        int j=0;
        for(j=0;j<lenb;j++){
            if(a[i+j]!=b[j])
            break;
        }
        if(lenb==j){
            printf("%d\n",i);
        }
    }

    return 0;
}