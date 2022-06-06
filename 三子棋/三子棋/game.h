#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3//表格大小


void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBorad(char board[ROW][COL], int row, int col);
void plyerMove(char board[ROW][COL], int row, int col);
void CumpoterMove(char board[ROW][COL], int row, int col);
char IsWin(char board[ROW][COL], int row, int col);//返回*玩家赢#电脑赢Q平局C继续
//注意该函数有返回值声明为char
int IsFull(char board[ROW][COL], int row, int col);