#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

enum colors
{
	red=10,bule,yellow=20,black,white,green
}clo;
/*
	�忨
	��������
	����
	ȡ��
	��ѯ
	�˿�
	�������

*/
/*
10
	�ƶ�
	����
	����
	����
20
	������
	����


*/
int main14()
{
	clo = 0;

	int val;
	scanf("%d", &val);
	switch (val)
	{
	case red:
		break;
	case bule:
		break;
	case yellow:
		break;
	case black:
		break;
	case white:
		break;
	case green:
		break;
	default:
		break;
	}
	//switch (val)
	//{
	//case red:
	//	printf("��������������");
	//	clo = 1;
	//	printf("��ɫ\n");
	//	break;
	//case bule:
	//	printf("");
	//	clo = 2;
	//	clo = 3;
	//	clo = 4;

	//	printf("��ɫ\n");

	//	break;
	//case yellow:
	//	printf("��ɫ\n");

	//	break;
	//case black:
	//	break;
	//case white:
	//	break;
	//case green:
	//	break;
	//default:
	//	break;
	//}

	system("pause");
	return EXIT_SUCCESS;
}