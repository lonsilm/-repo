#include<stdio.h>
#include<string.h>

int main()
{
char c[10001];
scanf("%s",c);
int len=strlen(c);
int i=0;

while(i<len){
char s=0;
s=c[i];
int cnt=0;
for(;c[i]==s;i++){
cnt++;
}
printf("(%c,%d)",s,cnt);
}

return 0;
}