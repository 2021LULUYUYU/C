#include <stdio.h>
#include <stdlib.h>
#include "game.h"

void menu()
{
    printf("*************************\n");
    printf("*****1.play   0.exit*****\n");
    printf("*************************\n");
}
void game()
{
     //雷的信息存储
     //1.布置好雷的信息
     char mine[ROWS][COLS]={0};
     //2.排查出雷的信息
     char show[ROWS][COLS]={0};
     //初始化
     InitBoard(mine,ROWS,COLS,'0');
     InitBoard(show,ROWS,COLS,'*');
     //打印棋盘
    // DispalyBoard(mine,ROW,COL);
     DispalyBoard(show,ROW,COL);
     //布置雷
     SetMine(mine,ROW,COL);
     //DispalyBoard(mine,ROW,COL);
     //扫雷
     FindMine(mine,show,ROW,COL);
}
void test()
{

    int input=0;
    srand((unsigned int)time(NULL));
    do
    {
        menu();
        printf("请选择0或1:\n");
        scanf("%d",&input);
        switch(input)
        {
        case 0:
            printf("退出游戏");
            break;
        case 1:
            game();
            break;
        default:
            printf("请重新选择:\n");
        }

    }while(input);
}


int main()
{
   test();
    return 0;
}
