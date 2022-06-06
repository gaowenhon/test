#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	char input[20] = { 0 };//关机程序
	system("shutdown -s -t 60");
again://注意符号
	printf("六十秒后关机，输入“不要”取消\n");
	scanf("%s", input);//注意符号
	if (strcmp(input, "不要") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}

