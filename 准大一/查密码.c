#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(void)
{//检测输入多少密码
    int n=0;
    scanf("%d",&n);
    char password[n][81]; 
    //检测输入的密码
    for(int i=0;i<n;i++){
        scanf("%s",password[i]);
    }
    //分情况提醒
    int len[n];
    for(int i=0;i<n;i++){
        len[i]=strlen(password[i]);
    }
        
    for(int i=0;i<n;i++){
        int A=0;
        int M=0;
        int D=0;
        int P=0;
        if(len[i]<6){
        printf("Your password is tai duan le.\n");
            P++;
        }
        else{
            for(int j=0;j<len[i];j++){
                int cnt=0;
                cnt++;
                //检测是否有字母
                if(isalpha(password[i][j])){
                    
                    A++;

                }
                //检测是否有数字
                else if(isdigit(password[i][j])){
                    
                    M++;
                    if(cnt==len[i] && M!=0)
                    printf("Your password needs shu zi.\n");
                }
                else if((password[i][j]=='.')){
                    
                    D++;
                }
                else if(cnt!=A+M+D && P==0){
                printf("Your password is tai luan le.\n");
                    P++;}
                
            }
            if(A==0 && P==0){
            printf("Your password needs zi mu.\n");
            P++;
            }
            else if(M==0 && P==0){
            printf("Your password needs shu zi.\n");
            P++;
            }
        }
    if(P==0)
    printf("Your password is wan mei.\n");
    }

    return 0;
}