#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3//����С


void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBorad(char board[ROW][COL], int row, int col);
void plyerMove(char board[ROW][COL], int row, int col);
void CumpoterMove(char board[ROW][COL], int row, int col);
char IsWin(char board[ROW][COL], int row, int col);//����*���Ӯ#����ӮQƽ��C����
//ע��ú����з���ֵ����Ϊchar
int IsFull(char board[ROW][COL], int row, int col);