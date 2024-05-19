#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main1501()
{
	//int * p = (int *)malloc(sizeof(int) * 10);
	////参数：目标 值 字节大小
	//memset(p, 0, 40);
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n", p[i]);
	//}
	//char * p = malloc(sizeof(char) * 10);
	//memset(p, 0, 10);
	//printf("%s\n", p);


	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	memset(arr, 0, 40);
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}

	//free(p);
	//system("pause");
	return EXIT_SUCCESS;
}
int main1502()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int *p = malloc(sizeof(int) * 10);
	//memcpy(p, arr, 40);
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n", p[i]);
	//}

	//free(p);

	memcpy(&arr[2], arr, 20);
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	char arr1[] = { 'h','e','l','l','o' };
	char * p = malloc(100);
	memset(p, 0, 100);
	//1、函数参数不同
	//2、strcpy拷贝字符串 memcpy 可以拷贝一块内存
	//3、拷贝结束标志不同 strcpy \0 memcpy  以个数为结尾
	strcpy(p, arr1);
	memcpy(p, arr1, 5);
	printf("%s\n", p);
	free(p);
	return 0;
}

int main1503()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//memmove拷贝重叠内存地址不会出现问题  但是效率比较低   如果拷贝源和拷贝目标没有重叠  两个函数效率一样
	memmove(&arr[2], arr, 20);

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
}
int main()
{
	//int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int arr2[5] = { 1,2,3,4 };

	//int val = memcmp(arr1, arr2, 20);
	//if (!memcmp(arr1, arr2, 8))
	//{
	//	printf("前两个数组元素内容相同");
	//}
	//printf("%d\n", val);

	//int * p1 = malloc(sizeof(int) * 10);
	//char * p2 = malloc(sizeof(char) * 40);

	//memcpy(p1, "hello", 6);
	//memcpy(p2, "hello", 6);
	//if (!memcmp(p1, p2, 6))
	//{
	//	printf("内容相同\n");
	//}
	//else
	//{
	//	printf("内容不相同\n");

	//}

	int a = 0xffff;
	char b = 0xffff;
	//printf("%d\n", b);
	if (!memcmp(&a, &b, 2))
	{
		printf("内容相同\n");
	}
	else
	{
		printf("内容不相同\n");

	}

	//free(p1);
	//free(p2);
	//练习   求出三名学生 三门功课成绩 并排序   通过堆空间来实现  arr[3][3];
	int ** p = (int **)malloc(sizeof(int *) * 3);
	p[0] = (int *)malloc(sizeof(int) * 3);
	p[1] = (int *)malloc(sizeof(int) * 3);
	p[2] = (int *)malloc(sizeof(int) * 3);

	p[0][0] = 90;
	p[0][1] = 80;
	p[0][2] = 70;

	//排序

	free(p[0]);
	free(p[1]);
	free(p[2]);

	free(p);


	return 0;
}