#include<stdio.h>
#include<math.h>
int main(void)
{
	int i = 0;
	int j = 0;
	int k = 1;
	int count = 0;
	for (i = 101; i <= 200; i += 2)
	{
		for (j = 1; j <= sqrt(i); j++)//sqrt开平方
		{
			if (i % j == 0)
				k = j;
		}
		if (k == 1)
		{
			printf("%d\n", i);
			count++;
		}
	}
	printf("总共有%d个素数", count);
	return 0;
}

