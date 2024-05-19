#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//extern  int a1;
extern  int a2;

//static  int a1 = 10;
//int a2 = 100;
void fun02()
{
	//static int a = 10;
	//a++;
	//int a = 10;
	//printf("%d\n", a++);
}
int main03()
{
	//int a1 = 10;
	//a1 = 100;
	////静态局部变量
	//static int a2 = 10;
	//a2 = 100;
	//printf("%d\n", a1);
	//printf("%d\n", a2);

	//for (int i = 0; i < 10; i++)
	//{
	//	fun02();
	//}
	//static int a = 10;
	//赋值
	//a1 = 100;
	//printf("%d\n", a1);
	//a2 = 1000;
	printf("%d\n", a2);
	system("pause");
	return EXIT_SUCCESS;
}

//int a = 10;