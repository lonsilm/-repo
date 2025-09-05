#include<stdio.h>

struct point {
    int x;
    int y;
};
//声明函数
void getstruct(struct point*);
//struct point getstr(void);
void output(struct point);

//主函数内容
void main()
{
    struct point y={0,0};
    getstruct(&y);
    //y=getstr();
    output(y);
}
//函数定义
void getstruct(struct point *p){
    scanf("%d",&p->x);//&(*p).x);
    scanf("%d",&p->y);//&(*p).y);
}
/*struct point getstr(void){
    struct point p;
    scanf("%d %d",&p.x,&p.y);
    return p;
    
}*/

void output(struct point p){
    printf("%d %d",p.x,p.y );
}
