#include<stdio.h>
int main(){
    int x=1;
    switch (x*10){   
        case 9: x+=1; break;
        case 10: x+=1;  
        case 11: x+=1;  
        default: x+=1;}
        printf("%d",x);
}