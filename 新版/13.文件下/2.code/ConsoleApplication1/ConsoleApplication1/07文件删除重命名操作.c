#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>



int main07()
{
	//if (!remove("../../e.txt"))
	//	printf("�ļ�ɾ���ɹ���\n");

	//if(!rename("../../e.txt", "../../eee.txt"))
	//	printf("�ļ��������ɹ���\n");

	//�ƶ�
	rename("../../eee.txt", "D://eee.txt");
	system("pause");
	return EXIT_SUCCESS;
}