#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//从源文件中读取字符  进行加密   生成一个新文件   
//从加密文件中读取字符  进行解密  变成源文件
int main()
{
	FILE * fp1 = fopen("D:\\Code\\src.txt", "r");
	FILE * fp2 = fopen("D:\\Code\\pas.txt", "w");
	if (!fp1 || !fp2)
		return -1;


	//读源文件内容  直到EOF
	char ch;
	while ((ch = fgetc(fp1)) != EOF)
	{
		ch++;
		fputc(ch, fp2);
	}


	fclose(fp1);
	fclose(fp2);

	system("pause");
	return EXIT_SUCCESS;
}

int main702(void)
{
	FILE * fp1 = fopen("D:\\Code\\pas.txt", "r");
	FILE * fp2 = fopen("D:\\Code\\src1.txt", "w");
	if (!fp1 || !fp2)
		return -1;

	char ch;
	while ((ch = fgetc(fp1)) != EOF)
	{
		ch--;
		fputc(ch, fp2);
	}

	fclose(fp1);
	fclose(fp2);


}