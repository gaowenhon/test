#define _CRT_SECURE_NO_WARNINGS 
//����������
#include<stdio.h>
#include"game.h"
void menu()
{
	printf("*********************\n");
	printf("****1.play 0.exit****\n");
	printf("*********************\n");
}
void game()//��Ϸ�㷨ʵ��
{
	char ret = 0;//����IsWin();����ֵ
	char board[ROW][COL] = {0};//ϣ������ȫ�ǿո�
	//��ʼ������
	InitBoard(board,ROW,COL);
	//��ӡ����
	DisplayBorad(board,ROW,COL);
	//����
	while (1)
	{
		//�������
		plyerMove(board, ROW, COL);
		DisplayBorad(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		 ret=IsWin(board, ROW, COL);//ע����շ���ֵ
		if (ret != 'C')//ע���Сд��������
		{
			break;
		}
		//��������
		CumpoterMove(board, ROW, COL);
		DisplayBorad(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		 ret =IsWin(board, ROW, COL);
		if (ret != 'C')//ע���Сд��������
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if(ret=='#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}
int main()//�������
{
	test();
	return 0;
}