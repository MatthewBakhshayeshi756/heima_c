#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main201()
{
	//ע�⣺�ļ�����ָ�� ����Ҫ�û�����
	FILE *fp = fopen("D:\\Code\\a.txt", "r");
	if (fp == NULL)
	{
		//1���Ҳ����ļ� 2��û��Ȩ�� 3��������ļ���������
		printf("�ļ���ʧ�ܣ�\n");
		return -1;
	}

	//�ļ�����
	printf("�ļ��򿪳ɹ���\n");

	//��һ���ַ�д���ļ���
	//fputc('A', fp);
	//char ch = fgetc(fp);
	//printf("%c\n", ch);
	//ch = fgetc(fp);
	//printf("%c\n", ch);

	//��ȡ�ļ���β  ������־ EOF  -1
	char ch;
	while ((ch = fgetc(fp))!=EOF)
	{
		printf("%c\n", ch);
	}


	//�ļ��ر�
	fclose(fp);

	//system("pause");
	return EXIT_SUCCESS;
}

int main202()
{
	//1����д����ʽ���ļ�
	/*
	r ��ֻ����ʽ���ļ�  ���ᴴ�����ļ�������ļ������ڻᱨ��
	w ��д�ķ�ʽ���ļ� �ļ������ڻᴴ�����ļ� ����ļ����������ݻḲ��ԭʼ����
	a ��׷�ӷ�ʽ���ļ� �ļ������ڻᴴ�����ļ� ���ļ�ĩβ׷������
	*/
	//FILE * fp = fopen("../../a.txt", "w");
	FILE * fp = fopen("../../b.txt", "a");
	//2���ж��ļ��Ŀ�����
	if (fp == NULL)
	{
		return -1;
	}
	//3��д�ļ�||���ļ�
	char ch = 'a';
	fputc(ch, fp);
	ch = 'b';
	fputc(ch, fp);

	//4���ر��ļ�
	fclose(fp);
	return 0;



}