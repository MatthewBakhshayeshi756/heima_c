#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


/*
fseek(文件流，移动字节，模式)  移动光标位置 
模式：SEEK_SET 以文件开头为标准
	  SEEK_CUR 以光标当前位置为标准
      SEEK_END 以文件结尾为标准

ftell(文件流)  获取光标当前位置  返回值是long  -1代表失败

rewind(文件流)  重置光标到文件开始位置

*/
int main601()
{

	char * arr = "hello world";
	FILE * fp = fopen("../../d.txt", "w");

	fputs(arr, fp);

	fclose(fp);


	system("pause");
	return EXIT_SUCCESS;
}
int main602()
{
	FILE * fp = fopen("../../d.txt", "r");
	if (!fp)
		return -1;
	//SEEK_SET 文件起始位置
	//SEEK_END 文件结尾位置
	//fseek(fp, 6, SEEK_SET);
	//fseek(fp, -5, SEEK_END);


	char ch;
	while ((ch = getc(fp)) != EOF)
	{
		//fseek(fp, 2, SEEK_CUR);
		int len = ftell(fp);
		printf("%c", ch);
		printf("%d\n", len);
	}
	fclose(fp);
	return 0;  

}

int main603()
{
	FILE * fp = fopen("../../d.txt", "r");
	if (!fp)
		return -1;

	char  buf[20];
	while (!feof(fp))
	{
		fgets(buf, 20, fp);
		printf("%s", buf);
		printf("%ld\n", ftell(fp));
	}
	fclose(fp);
	return 0;
}

int main604()
{
	FILE * fp = fopen("../../d.txt", "r");
	if (!fp)
		return -1;
	char  buf[20];
	for (int i = 0; i < 5; i++)
	{
		fgets(buf, 20, fp);
		printf("%s", buf);
		printf("%ld\n", ftell(fp));
	}
	rewind(fp);
	fseek(fp, -5, SEEK_SET);
	printf("%ld\n", ftell(fp));

	fclose(fp);
	return 0;

}