#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main04()
{
	//1��ָ��һ���ļ���
	char fileName[256];
	printf("�������ļ�����\n");
	scanf("%s", fileName);
	//ע�����⣺�������ջ���
	getchar();
	//2�����ļ� 
	FILE * fp = fopen(fileName, "w");
	//3���ж��ļ�������
	if (!fp)
		return -1;
	//4��ѭ��¼������
	char buf[1024];
	while (1)
	{
		memset(buf, 0, 1024);
		fgets(buf, 1024, stdin);
		//5���˳����� comm=exit  quit
		if (!strncmp("comm=exit", buf, 9))
			break;

		//6�����ַ���д���ļ���
		int i = 0;
		while (buf[i])
			fputc(buf[i++], fp);

		//���»�����
		//fflush(fp);

	}
	//7���ر��ļ�

	fclose(fp);



	system("pause");
	return EXIT_SUCCESS;
}

