#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#include <time.h>

/*
1�� ��д��ʽ���ļ� �ж��ļ�
2������ ��������  �ַ���
3��ѭ��100��
4����ʽ���ַ���
5��¼������
6���ļ��ر�
ѭ����������100��
char arr[20]
sprintf(arr,"%d%c%d=\n",a,c,b);
while(arr!='\0')
{

}
3*2=
5/2=
3-1=
4+6=
*/
enum MyEnum
{
	add,sub,mlt,dive
}opt;
int main06()
{
	srand((unsigned int)time(NULL));
	FILE * fp = fopen("../../c.txt", "w");
	if (!fp)
		return -1;

	int a, b;
	char c;
	char buf[20];

	for (int i = 0; i < 100; i++)
	{
		switch (rand()%4)
		{
		case add:
			c = '+';
			break;
		case sub:
			c = '-';
			break;
		case mlt:
			c = '*';
			break;
		case dive:
			c = '/';
			break;
		}
		a = rand() % 10 + 1;//2
		b = rand() % 10 + 1;//3
		memset(buf, 0, 20);
		sprintf(buf, "%d%c%d=\n", a, c, b);//2*3=\n
		int j = 0;
		while (buf[j])
			fputc(buf[j++], fp);
	}
	fclose(fp);

	system("pause");
	return EXIT_SUCCESS;
}