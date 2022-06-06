#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int arr[] = { -1,-1,-2,-10,-3,-4,-10,-5,-6,-7,-8,-9 };//求最大值
	int MAX = arr[0];
	int i = 0;
	for (i = 1; i <= sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (MAX < arr[i])
			MAX = arr[i];
	}
	printf("%d\n", MAX);
	return 0;
}