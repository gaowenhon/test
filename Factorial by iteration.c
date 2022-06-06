#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int fac1(int n)//迭代
{
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	return ret;
}
int fac2(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * fac1(n - 1);
}
int main(void)
{
	int n = 0;//n的阶乘
	int ret = 0;
	scanf("%d", &n);//循环方式
	ret = fac2(n);
	printf("%d\n", ret);
	return 0;
}
