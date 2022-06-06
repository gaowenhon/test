#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)//规定排序次数sz-1次
	{
		int flag = 1;
		int j = 0;//冒泡排序，两两比较交换
		for (j = 0; j < sz - 1 - i; j++)//该循环一次找到最后一位(最值）
		{
			if (arr[j] > arr[j + 1])//更改符号即可条件增减序
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//会进入该循环说明数值无序。
			}
		}
		if (flag == 1)//效率优化
		{
			break;//等于一说明没有进入j循环，数组有序，不用交换
		}
	}
}
int main(void)
{
	int i = 0;
	int arr[] = { 6,1,2,3,4,5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);//传参的为数组的地址，可通过函数更改数组顺序
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
