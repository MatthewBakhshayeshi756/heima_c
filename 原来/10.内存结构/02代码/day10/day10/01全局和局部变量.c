#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//�������� ���ǿ���ʹ���������  ������������ڴ�ռ�
extern int a;

//ȫ�ֱ��� ����������Ŀ��  ʹ�õ�ǰ������Ҫ��ʹ�õ��ļ��н�������
//int a = 100;
void fun01(int a, int b, int c)
{
	//printf("%p\n", &c);
	//printf("%p\n", &b);
	//printf("%p\n", &a);
	a += 10;
	printf("%d\n", a);//20

	//getchar();
}

int main01()
{
	printf("%d\n", a);
	//���������÷�Χ���Ӵ��������ں�������
	int a = 10;

	printf("=================\n");
	//{//������ ������  ������}
	//int *p;
	//{
	//	printf("%d\n", a);
	//	int a = 1000;
	//	p = &a;
	//	printf("%d\n", a);
	//}
	//int b = 100;
	//printf("p=%d\n", *p);
	printf("=================\n");

	int i = 100;
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", i);
	}
	printf("%d\n", i);
	printf("=================\n");

	//int i = 100;
	fun01(a,a,a);
	printf("%d\n", a);
	//system("pause");
	return EXIT_SUCCESS;
}
//���ȫ�ֱ���д������������ ��ʹ����Ҫ����
//int a = 100;