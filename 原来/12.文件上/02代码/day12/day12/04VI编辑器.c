#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main04()
{
	//1、指定一个文件名
	char fileName[256];
	printf("请输入文件名：\n");
	scanf("%s", fileName);
	//注意问题：用来接收换行
	getchar();
	//2、打开文件 
	FILE * fp = fopen(fileName, "w");
	//3、判断文件可用性
	if (!fp)
		return -1;
	//4、循环录入内容
	char buf[1024];
	while (1)
	{
		memset(buf, 0, 1024);
		fgets(buf, 1024, stdin);
		//5、退出命令 comm=exit  quit
		if (!strncmp("comm=exit", buf, 9))
			break;

		//6、将字符串写入文件中
		int i = 0;
		while (buf[i])
			fputc(buf[i++], fp);

		//更新缓冲区
		//fflush(fp);

	}
	//7、关闭文件

	fclose(fp);



	system("pause");
	return EXIT_SUCCESS;
}

