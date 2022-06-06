#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Fib(int n)//斐波那契数列，1，1，2，3，5，8，13从前往后算
{
	int a = 1, b = 1, c = 0;
	if (n <= 2)
		return 1;
	else
	{
		while (n > 2)
		{
			c = a + b;
			a = b;
			b = c;
			n--;
		}
		return c;
	}
}
int main(void)
{
	int n = 0;
	int ret = 0;
	int count = 0;
	scanf("%d", &n);
	ret = Fib(n);
	printf("ret=%d\n", ret);
	return 0;
}
