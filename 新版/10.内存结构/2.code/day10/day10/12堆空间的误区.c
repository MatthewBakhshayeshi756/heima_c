#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main1201()
{
	//����Ұָ��
	int * p = (int *)malloc(0);
	printf("%p\n", p);
	//δҰָ�븳ֵ
	*p = 100;

	printf("%d\n", *p);

	//system("pause");
	//�ѿռ俪��û���ͷ�  �ͷŻᱨ��
	//free(p);
	return EXIT_SUCCESS;
}

int * test01()
{
	int *p = (int *)malloc(sizeof(int) * 10);
	//free(p);
	//p = NULL;
	return p;
}
int main1202()
{
	free(NULL);
	int *p = test01();
	if (!p)
		return;
	for (int i = 0; i < 10; i++)
	{
		p[i] = i;
	}
	for (int i = 0; i < 10; i++)
		printf("%d\n", p[i]);

	//���ж� ���ͷ�
	if (p != NULL)
		free(p);
	//�ͷ���� ��ɿ�ָ��
	p = NULL;
	free(p);
	return 0;
}