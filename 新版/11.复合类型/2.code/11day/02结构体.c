#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//����ṹ���ʽ
/*
struct �ṹ������
{
	�ṹ���Ա�б�

};
//����ṹ�����
 struct �ṹ������ �ṹ������� 
 �ṹ�������.�ṹ���Ա�б� = ֵ
 ������ַ�������  ��Ҫʹ��strcpy
*/

struct students
{
	//��Ա�б�
	char name[21];
	unsigned int age;
	char tel[16];
	float scores[3];
	char sex;
}stu = { "�����˹",500,"13888888888",100.0f,200,300,'M' };

int main02()
{
	//���սṹ��˳�� ��ֵ
	//struct  students   stu = { "�����˹",500,"13888888888",100.0f,200,300,'M' };

	//struct  students   stu = { .sex = 'M',.name = "����",.tel = "13777777777",.scores[0] = 100,.scores[1] = 99,.scores[2] = 88,.age = 48 };

	//struct students stu;
	////stu.name = "л����";
	//strcpy(stu.name, "л����");
	//stu.age = 50;
	//strcpy(stu.tel, "13777777778");
	//stu.scores[0] = 90;
	//stu.scores[1] = 80;
	//stu.scores[2] = 70;
	//stu.sex = 'F';

	//strcpy(stu.name, "л����");
	//stu.age = 50;
	//strcpy(stu.tel, "13777777778");
	//stu.scores[0] = 90;
	//stu.scores[1] = 80;
	//stu.scores[2] = 70;
	//stu.sex = 'F';


	printf("������%s\n", stu.name);
	printf("���䣺%d\n", stu.age);
	printf("�绰: %s\n", stu.tel);
	printf("�ɼ�: %.1f   %.1f   %.1f\n", stu.scores[0], stu.scores[1], stu.scores[2]);
	printf("�Ա�: %s\n", stu.sex == 'M' ? "��" : "Ů");
	system("pause");
	return EXIT_SUCCESS;
}