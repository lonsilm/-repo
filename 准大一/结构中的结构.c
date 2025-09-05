#include<stdio.h>

struct  date
{
    int mm;
    int dd;
    int yy;
};
struct time{
    int hour;
    int min;
    int sec;
};
struct fulltime{
    struct date;
    struct time;
};

void getstrd(struct date*);
void getstrt(struct time*);

int main()
{
    struct fulltime td;
    getstrd()

    return 0;
}

void getstrd(struct date*)
{

}