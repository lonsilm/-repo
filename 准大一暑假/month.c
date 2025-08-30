#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//strcpy函数的数组和指针表达
char* mycpy(char* dst,char* srt)
{
    /*int idx=0;
    while(srt[idx] != 0){
        dst[idx]=srt[idx];
        idx++;
    }
    dst[idx]='\0';
    return dst;*/

    /*char* ret=dst;
    while(*srt != 0){
        *dst=*srt;
        dst++;
        srt++;
    }
    *dst=0;
    return ret;*/
    
}

int main(int argc,char const *argv[])
{
    /*int ch;

    while((ch=getchar())!=EOF){
        putchar(ch);
    }*/
   /*char s1[]="abc ";
   char s2[]="abc";
   printf("%d\n",strcmp(s1,s2));

   char src[12]="hello world";

   char *dst=(char*)malloc(strlen(src)+1);
   printf("%s\n",strcpy(dst,src));
    //printf("%s",mycpy(dst,src));

    char a[15]="ab\110\\cd\'\\ne";
    printf("%d\n",strlen(a+5));

    char s[5]={"ABCDE"}; 
    puts(s);
    printf("\n");*/

    
    char w[5]={'A', 'B', 'C', 'D', 'E'};
    puts(w);
    printf("\n");

    //char str[]={'a','b','c'};
    //printf("%d",strlen(str));

    return 0;
}
