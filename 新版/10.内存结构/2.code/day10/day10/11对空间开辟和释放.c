#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main11()
{

	int a = 10;
	//����һ������ �ڶ���  ��λ��BYTE
	//char *p = (char *)malloc(sizeof(char));

	//*p = 100;
	//printf("%c\n", *p);

	//int arr[10];
	int * p = (int *)malloc(sizeof(int) * 10);

	for (int i = 0; i < 10; i++)
	{
		p[i] = i;
	}

	for (int i = 0; i < 10; i++)
		//printf("%d\n", *(p + i));
		printf("%d\n", p[i]);

	//�ͷ�   �����׵�ַ�Զ��ͷ�  ���������Ķѿռ���ʹ�ý���֮���ͷ� ��ռ��ϵͳ��Դ
	free(p);

	system("pause");
	return EXIT_SUCCESS;
}