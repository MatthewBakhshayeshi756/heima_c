#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


/*
fseek(�ļ������ƶ��ֽڣ�ģʽ)  �ƶ����λ�� 
ģʽ��SEEK_SET ���ļ���ͷΪ��׼
	  SEEK_CUR �Թ�굱ǰλ��Ϊ��׼
      SEEK_END ���ļ���βΪ��׼

ftell(�ļ���)  ��ȡ��굱ǰλ��  ����ֵ��long  -1����ʧ��

rewind(�ļ���)  ���ù�굽�ļ���ʼλ��

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
	//SEEK_SET �ļ���ʼλ��
	//SEEK_END �ļ���βλ��
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