#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
int main(void)
{
	char arr1[] = { "welcome world" };
	char arr2[] = { "#############" };
	int left = 0;//0,1,2,3,4,5,6,7
	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//后面省略了\0
	int right = strlen(arr1) - 1;//法二
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);
		system("cls");
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
}