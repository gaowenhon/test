#define _CRT_SECURE_NO_WARNINGS 
//测试三子棋
#include<stdio.h>
#include"game.h"
void menu()
{
	printf("*********************\n");
	printf("****1.play 0.exit****\n");
	printf("*********************\n");
}
void game()//游戏算法实现
{
	char ret = 0;//接受IsWin();返回值
	char board[ROW][COL] = {0};//希望里面全是空格
	//初始化数组
	InitBoard(board,ROW,COL);
	//打印棋盘
	DisplayBorad(board,ROW,COL);
	//下棋
	while (1)
	{
		//玩家下棋
		plyerMove(board, ROW, COL);
		DisplayBorad(board, ROW, COL);
		//判断玩家是否赢
		 ret=IsWin(board, ROW, COL);//注意接收返回值
		if (ret != 'C')//注意大小写！！！！
		{
			break;
		}
		//电脑下棋
		CumpoterMove(board, ROW, COL);
		DisplayBorad(board, ROW, COL);
		//判断电脑是否赢
		 ret =IsWin(board, ROW, COL);
		if (ret != 'C')//注意大小写！！！！
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if(ret=='#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
}
int main()//函数入口
{
	test();
	return 0;
}