#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//��Դ�ļ��ж�ȡ�ַ�  ���м���   ����һ�����ļ�   
//�Ӽ����ļ��ж�ȡ�ַ�  ���н���  ���Դ�ļ�
int main()
{
	FILE * fp1 = fopen("D:\\Code\\src.txt", "r");
	FILE * fp2 = fopen("D:\\Code\\pas.txt", "w");
	if (!fp1 || !fp2)
		return -1;


	//��Դ�ļ�����  ֱ��EOF
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