#include<stdio.h>
int main(void)
{
	int i = 0;//计算1-100有多少个9
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
			count++;
		if (i / 10 == 9)
			count++;
	}
	printf("共有%d个9\n", count);
	return 0;
}