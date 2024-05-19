#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>



int main07()
{
	//if (!remove("../../e.txt"))
	//	printf("文件删除成功！\n");

	//if(!rename("../../e.txt", "../../eee.txt"))
	//	printf("文件重命名成功！\n");

	//移动
	rename("../../eee.txt", "D://eee.txt");
	system("pause");
	return EXIT_SUCCESS;
}