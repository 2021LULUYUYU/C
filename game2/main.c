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
     //�׵���Ϣ�洢
     //1.���ú��׵���Ϣ
     char mine[ROWS][COLS]={0};
     //2.�Ų���׵���Ϣ
     char show[ROWS][COLS]={0};
     //��ʼ��
     InitBoard(mine,ROWS,COLS,'0');
     InitBoard(show,ROWS,COLS,'*');
     //��ӡ����
    // DispalyBoard(mine,ROW,COL);
     DispalyBoard(show,ROW,COL);
     //������
     SetMine(mine,ROW,COL);
     //DispalyBoard(mine,ROW,COL);
     //ɨ��
     FindMine(mine,show,ROW,COL);
}
void test()
{

    int input=0;
    srand((unsigned int)time(NULL));
    do
    {
        menu();
        printf("��ѡ��0��1:\n");
        scanf("%d",&input);
        switch(input)
        {
        case 0:
            printf("�˳���Ϸ");
            break;
        case 1:
            game();
            break;
        default:
            printf("������ѡ��:\n");
        }

    }while(input);
}


int main()
{
   test();
    return 0;
}
