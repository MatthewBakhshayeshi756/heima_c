#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main801()
{
	char * p = "hello world\n";
	FILE * fp = fopen("../../d.txt", "w");
	if (!fp)
		return -1;

	fputs(p, fp);


	fclose(fp);

	system("pause");
	return EXIT_SUCCESS;
}

int main802()
{
	FILE * fp = fopen("../../d.txt", "r");
	if (!fp)
		return -1;
	//���ȡ  
	char buf[5];//1KB
	fgets(buf, 5, fp);
	printf("��һ�ζ�ȡ�����%s\n", buf);
	memset(buf, 0, 5);

	fgets(buf, 5, fp);
	printf("�ڶ��ζ�ȡ�����%s\n", buf);

	memset(buf, 0, 5);

	fgets(buf, 5, fp);
	printf("�����ζ�ȡ�����%s\n", buf);
	

	fgets(buf, 5, fp);
	printf("���Ĵζ�ȡ�����%s\n", buf);
	fclose(fp);
	return 0;
}
int main08()
{
	FILE * fp = fopen("../../d.txt", "r");
	if (!fp)
		return -1;

	//char buf[1024*1024];//1M
	char * buf = malloc(sizeof(char) * 1024);

	//feof�ж��ļ����Ƿ񵽽�β  EOF �ж��ַ��Ƿ񵽽�β
	while (feof(fp) == 0)
	{
		memset(buf, 0, 1024);
		fgets(buf, 1024, fp);
		printf("%s", buf);
	}


	free(buf);
	fclose(fp);

}