#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct students
{
	char name[20];//20
	int age;//4 4
	char sex;//1 4
	char tel[15];//16
};
typedef struct students stu;
int main201()
{
	stu s[5] = {
		{ "���",50,'M',"110" },
		{ "���",20,'M',"120" },
		{ "����",30,'M',"119" },
		{ "���",40,'M',"911" },
		{ "����",10,'M',"666" } };


	FILE * fp = fopen("../../c.txt", "wb");
	if (!fp)
		return -1;


	for (int i = 0; i < 5; i++)
	{
		fwrite(&s[i], sizeof(stu), 1, fp);
	}
	fclose(fp);

	return EXIT_SUCCESS;
}

int main202()
{
	printf("�ṹ���С��%d\n", sizeof(stu));
	return 0;
	FILE * fp = fopen("../../c.txt", "rb");
	if (!fp)
		return -1;
	stu s[5];
	int i = 0;
	while (!feof(fp))
	{
		fread(&s[i++], sizeof(stu),1 , fp);
	}
	fclose(fp);
	for (i = 0; i < 5; i++)
	{
		printf("������%s\t���䣺%d\t�Ա�%s\t�绰��%s\n", s[i].name, s[i].age, s[i].sex == 'M' ? "��" : "Ů", s[i].tel);
	}

	return 0;
}