#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//声明变量 就是可以使用这个变量  声明不会分配内存空间
extern int a;

//全局变量 作用整个项目中  使用的前提是需要在使用的文件中进行声明
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
	//变量的作用范围：从创建到所在函数结束
	int a = 10;

	printf("=================\n");
	//{//程序体 代码体  函数体}
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
//如果全局变量写在主函数下面 想使用需要申明
//int a = 100;