#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100

int e;
int f = 10;
static int g;
static int h = 10;
int main10()
{
	int a = 10;
	static int b;
	static int c = 10;

	int i[10];
	int j[10] = { 0 };

	int *k;
	int *l = &a;

	char *p = "hello world";
	char ch[] = "hello world";

	const int m = 10;

	printf("�ֲ�����a�ĵ�ַ:%p\n", &a);
	printf("δ��ʼ���ֲ���̬����b�ĵ�ַ:%p\n", &b);
	printf("��ʼ���ֲ���̬����c�ĵ�ַ:%p\n", &c);
	printf("δ��ʼ��ȫ�ֱ���e�ĵ�ַ:%p\n", &e);
	printf("��ʼ��ȫ�ֱ���f�ĵ�ַ:%p\n", &f);
	printf("δ��ʼ����̬ȫ�ֱ���g�ĵ�ַ:%p\n", &g);
	printf("��ʼ����̬ȫ�ֱ���h�ĵ�ַ:%p\n", &h);

	printf("δ��ʼ������i�ĵ�ַ��%p\n", i);
	printf("��ʼ������j�ĵ�ַ��%p\n", j);

	printf("δ��ʼ��ָ��k�ĵ�ַ��%p\n", &k);
	printf("��ʼ��ָ��l�ĵ�ַ��%p\n", &l);

	printf("�ַ�������p�ĵ�ַ��%p\n", p);
	printf("����m�ĵ�ַ��%p\n", &m);

	printf("�ַ�����ch�ĵ�ַ��%p\n", ch);

	
	//printf("defien����ĳ���", &100);
	//printf("defien����ĳ���", &MAX);


	system("pause");
	return EXIT_SUCCESS;
}