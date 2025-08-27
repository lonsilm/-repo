#include<stdio.h>

int main()
{
    const int size=3;
    int square[size][size];
    int ret=-1;


    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            scanf("%d",&square[i][j]);
        }
    }

    //竖行检测
    {

    for(int 
        i=0;i<size && ret==-1;i++){
        int numofX=0;
        int numofO=0;
   
        for(int j=0;j<size;j++){


            if(square[i][j]==1)
            numofX++;
            else
            numofO++;
            }
        if(numofX==size)
        ret=1;
        else if(numofO==size)
        ret=0;

        }
    }
    //横列检测
    {

    for(int j=0;j<size && ret==-1;j++){
        int numofX=0;
        int numofO=0; 
        for(int i=0;i<size;i++){
     
            if(square[i][j]==1)
            numofX++;
            else
            numofO++;
        }
        if(numofX==size)
        ret=1;
        else if(numofO==size)
        ret=0;

    }
}
    //斜列检测
    {

    for(int i=0;i<size && ret==-1;i++){
        int numofX=0;
        int numofO=0;
        while(i<size){
        if(square[i][i]==1)
        numofX++;
        else if(square[i][i]==0)
        numofO++;

        i++;
        }

         if(numofX==size)
        ret=1;
        else if(numofO==size)
        ret=0;

    }
}
    {
        for(int i=0;i<size && ret==-1;i++){
        int numofX=0;
        int numofO=0;
        while(i<size){
        if(square[i][size-1-i]==1)
        numofX++;
        else if(square[i][size-1-i]==0)
        numofO++;

        i++;
        }

         if(numofX==size)
        ret=1;
        else if(numofO==size)
        ret=0;

    }
}
    //输出
    if(ret==1)
    printf("X win!");

    else if(ret==0)
    printf("O win!");

    else if (ret==-1)
    printf("no winner");
    

    return 0;
}