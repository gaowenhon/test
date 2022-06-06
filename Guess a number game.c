#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("********************\n");
	printf("***1.play  0.exit***\n");
	printf("********************\n");
}
void game()
{
	printf("猜数字\n");
	//生成随机数
	int ret = 0;
	int guess = 0;
	ret = rand() % 10 + 1;//10以内的数字
	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);//不可有换行符，scanf只拾取一个数字，会残留值影响读取。
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜到了\n");
			break;
		}
	}
}
int main(void)
{
	//猜数字游戏
	int input = 0;
	srand((unsigned int)time(NULL));//设置随机数起点时间戳获取随机起点
	do
	{
		menu();
		printf("请选择>:");
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
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}
