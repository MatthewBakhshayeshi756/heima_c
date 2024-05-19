#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//1、数组作为函数参数可以退化为指针
//2、在传递数组时需要加上数组的个数

void print01(int * arr,int len)
{
	//函数参数中如有有数组  都会转化为指针  sizeof(int *)  4  所以求出来的值不能作为数组的循环条件存在
	for (int i = 0; i < len; i++)
	{
		printf("%d\n", arr[i]);
	}
}
int main301()
{

	int arr[] = { 1,2,3,4,6,0,7,8,9,10 };

	print01(arr,sizeof(arr)/sizeof(arr[0]));
	system("pause");
	return EXIT_SUCCESS;
}
void print(char * arr)
{
	//两种方式可以求出字符串长度 \0
	int len = strlen(arr);
	int i = 0;
	while (arr[i] != '\0')
	{
		i++;
	}
}
int main302(void)
{
	//char arr[] = "hello world";
	char arr[] = { 'h','e','l','l','o' };
	print(arr);
	return 0;
}