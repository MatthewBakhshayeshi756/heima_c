#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct stu
{
	//��Ա�б�
	char name[21];
	unsigned int age;
	char tel[16];
	float scores[3];//scores[0]
	char sex;
};
int main04()
{

	//�ṹ������
	struct stu  s[2];
	for (int i = 0; i < 2; i++)
	{
		printf("�������� ����  ����  �绰  �ɼ�  �Ա�:\n");
		scanf("%s%d%s%f%f%f,%c", s[i].name, &s[i].age, s[i].tel, &s[i].scores[0], &s[i].scores[1], &s[i].scores[2], &s[i].sex);
	}


	for (int i = 0; i < 2; i++)
	{
		printf("������%s\n", s[i].name);
		printf("���䣺%d\n", s[i].age);
		printf("�绰: %s\n", s[i].tel);
		printf("�ɼ�: %.1f   %.1f   %.1f\n", s[i].scores[0], s[i].scores[1], s[i].scores[2]);
		printf("�Ա�: %s\n", s[i].sex == 'M' ? "��" : "Ů");
	}


	system("pause");
	return EXIT_SUCCESS;
}

/*
ѧԱ������

���Ź��γɼ�  �ܳɼ�����

����



if����
{
char * temp = s[i].name;


}

*/