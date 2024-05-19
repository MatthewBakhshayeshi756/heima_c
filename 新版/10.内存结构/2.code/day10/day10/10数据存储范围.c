#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100

int e;
int f = 10;
static int g;
static int h = 10;
int main10()
{
	int a = 10;
	static int b;
	static int c = 10;

	int i[10];
	int j[10] = { 0 };

	int *k;
	int *l = &a;

	char *p = "hello world";
	char ch[] = "hello world";

	const int m = 10;

	printf("局部变量a的地址:%p\n", &a);
	printf("未初始化局部静态变量b的地址:%p\n", &b);
	printf("初始化局部静态变量c的地址:%p\n", &c);
	printf("未初始化全局变量e的地址:%p\n", &e);
	printf("初始化全局变量f的地址:%p\n", &f);
	printf("未初始化静态全局变量g的地址:%p\n", &g);
	printf("初始化静态全局变量h的地址:%p\n", &h);

	printf("未初始化数组i的地址：%p\n", i);
	printf("初始化数组j的地址：%p\n", j);

	printf("未初始化指针k的地址：%p\n", &k);
	printf("初始化指针l的地址：%p\n", &l);

	printf("字符串常量p的地址：%p\n", p);
	printf("常量m的地址：%p\n", &m);

	printf("字符数组ch的地址：%p\n", ch);

	
	//printf("defien定义的常量", &100);
	//printf("defien定义的常量", &MAX);


	system("pause");
	return EXIT_SUCCESS;
}