#includ<stdio.h>
int main()
{
	int a = 1;
	while (a <= 100)
	{
		if (a % 2 == 1)//�ж�����
			printf("%d\n", a);
		a++;
	}
	return 0;
}