#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main201()
{
	//注意：文件类型指针 不需要用户操作
	FILE *fp = fopen("D:\\Code\\a.txt", "r");
	if (fp == NULL)
	{
		//1、找不到文件 2、没有权限 3、程序打开文件超出上限
		printf("文件打开失败！\n");
		return -1;
	}

	//文件操作
	printf("文件打开成功！\n");

	//将一个字符写入文件中
	//fputc('A', fp);
	//char ch = fgetc(fp);
	//printf("%c\n", ch);
	//ch = fgetc(fp);
	//printf("%c\n", ch);

	//读取文件结尾  结束标志 EOF  -1
	char ch;
	while ((ch = fgetc(fp))!=EOF)
	{
		printf("%c\n", ch);
	}


	//文件关闭
	fclose(fp);

	//system("pause");
	return EXIT_SUCCESS;
}

int main202()
{
	//1、以写的形式打开文件
	/*
	r 以只读形式打开文件  不会创建新文件，如果文件不存在会报错
	w 以写的方式打开文件 文件不存在会创建新文件 如果文件里面有内容会覆盖原始内容
	a 以追加方式打开文件 文件不存在会创建新文件 在文件末尾追加内容
	*/
	//FILE * fp = fopen("../../a.txt", "w");
	FILE * fp = fopen("../../b.txt", "a");
	//2、判断文件的可用性
	if (fp == NULL)
	{
		return -1;
	}
	//3、写文件||读文件
	char ch = 'a';
	fputc(ch, fp);
	ch = 'b';
	fputc(ch, fp);

	//4、关闭文件
	fclose(fp);
	return 0;



}