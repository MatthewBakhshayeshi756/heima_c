#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int aa = 10;

char * test()
{
	//字符数组  创建位置在栈区  
	//char arr[] = "hello world";
	//字符串常量  会在程序运行时   常量区  不能被修改的 在程序结束时 销毁
	char * arr = "hello world";
	//static 
	aa = 100;
	//保证指针地址对应的值是有内容的
	return arr;
}
int main04()
{
	char * p = test();
	printf("%p\n", p);
	printf("%s\n", p);

	system("pause");
	return EXIT_SUCCESS;
}

//strstr   hello  world   llo