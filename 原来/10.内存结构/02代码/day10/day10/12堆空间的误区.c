#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main1201()
{
	//操作野指针
	int * p = (int *)malloc(0);
	printf("%p\n", p);
	//未野指针赋值
	*p = 100;

	printf("%d\n", *p);

	//system("pause");
	//堆空间开辟没有释放  释放会报错
	//free(p);
	return EXIT_SUCCESS;
}

int * test01()
{
	int *p = (int *)malloc(sizeof(int) * 10);
	//free(p);
	//p = NULL;
	return p;
}
int main1202()
{
	free(NULL);
	int *p = test01();
	if (!p)
		return;
	for (int i = 0; i < 10; i++)
	{
		p[i] = i;
	}
	for (int i = 0; i < 10; i++)
		printf("%d\n", p[i]);

	//先判断 在释放
	if (p != NULL)
		free(p);
	//释放完成 变成空指针
	p = NULL;
	free(p);
	return 0;
}