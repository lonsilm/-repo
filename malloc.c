#include<stdio.h>
#include<stdlib.h>

//可以用来测空间
int main()
{
    void *p;
    int cnt=0;
    while((p=malloc(100*1024*1024))){
        cnt++;
    }
    printf("%d00MB", cnt);
    
    return 0;
}