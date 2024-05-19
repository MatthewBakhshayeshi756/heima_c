#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main1401()
{

	//开辟多大堆空间 就要操作多大堆空间
	char * p = malloc(sizeof(char) * 10);//\0

	strcpy(p, "hello world");

	printf("%s", p);


	free(p);


	system("pause");
	return EXIT_SUCCESS;
}

int main14()
{
	char arr[100] = "hello world";
	arr[1] = 'A';
	char * p = malloc(sizeof(char) * 100);

	char * p1 = "hello world";
	char * p2 = "hello world";
	printf("%p\n", p1);
	printf("%p\n", p2);
	strcpy(p, "hello world");
	*p = 'A';
	printf("%p\n", p);
	printf("%s\n", p);

	free(p);
	return 0;
}