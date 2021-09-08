#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define ROW 9
#define COL 9
//防止越界访问
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 10
void InitBoard(char board[ROWS][COLS],int rows,int cols,char set);
void DispalyBoard(char board[ROWS][COLS],int row,int col);
void SetMine(char board[ROWS][COLS],int row,int col);
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);
#endif // GAME_H_INCLUDED
