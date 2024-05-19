#define _CRT_SECURE_NO_WARNINGS
#include "dict.h"



////ȫ�ֱ���
//dic * p;

//1�����ļ� �洢����
void ReadFile(dic ** p)
{
	//���ٶѿռ�
	//*p = (dic*)malloc(sizeof(dic)*WORDMAX);//  realloc()  ����
	*p = (dic*)malloc(sizeof(dic)* WORDMAX);

	//��ȡ�ļ�����
	FILE * fp = fopen("D:\\dict.txt", "r");
	if (!fp)
		return -1;
	int i = 0;
	char buf[1024];
	while (!feof(fp))
	{
		memset(buf, 0, 1024);
		fgets(buf, 1024, fp);

		//��ʽ������
		//buf[strlen(buf) - 1] = '\0';
		for (int i = strlen(buf); i > 0; i--)
		{
			if (buf[i] == '\n')
			{
				buf[i] = '\0';
				break;
			}
		}


		//���ٶѿռ�
		(*p+i)->word = (char *)malloc(strlen(buf) + 1);
		memset((*p + i)->word, 0, strlen(buf) + 1);
		strcpy((*p + i)->word, &buf[1]);//#abc\n

		memset(buf, 0, 1024);
		fgets(buf, 1024, fp);
		(*p + i)->trans = (char*)malloc(strlen(buf) + 1);
		memset((*p + i)->trans, 0, strlen(buf) + 1);
		strcpy((*p + i)->trans, buf);
		i++;
	}


	fclose(fp);
}

//2���ļ�����
//ch ���뵥��
//content ���ʶ�Ӧ�ķ���
int SearchWord(char * ch, char * content, dic *p)
{
	memset(content, 0, 1024);
	for (int i = 0; i < WORDMAX; i++)
	{
		if (!strcmp(ch, p[i].word))
		{
			printf("%s\n", p[i].trans); 
			return 1;
		}
	}
	return 0;
}

//3���ͷ�
void clear(dic * p)
{
	for (int i = 0; i < WORDMAX; i++)
	{
		free(p[i].word);
		free(p[i].trans);
	}
	free(p);
}

int main()
{
	dic * p;
	//��ȡ�ļ�
	ReadFile(&p);


	//���ʷ��룺
	char content[1024];

	char ch[1024];

	while (1)
	{
		//fgets(ch, 1024, stdin);
		gets(ch);

		if (!strncmp("comm=exit", ch,9))
		{
			break;
		}
		//����ж�
		int flag = SearchWord(ch, content, p);
		if (flag)
			printf("%s\n", content);
		else
			printf("δ�ҵ��õ��ʵĽ��ͣ�\n");
	}

	//�ͷŶѿռ�
	clear(p);

	return EXIT_SUCCESS;
}