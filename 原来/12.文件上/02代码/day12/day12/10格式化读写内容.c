#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>



/*
�ַ����ı�׼�������
scanf("%d,%d,%d",ch)    printf("%0d",1);
��ʽ���ַ���   char arr[]="��Լ98"   char ch[10]="����"; int a=1990;
sscanf() sprintf()   ��������  char *    format
sscanf(arr,"%s%d",ch,&a);
sprintf(arr,"%s%d",ch,a);

��ʽ���ļ���д ��������  FILE *  fp    format
fscanf() fprintf()
fscanf(fp,"%s%d",ch,&a);
fprintf(fp,"%s%d",ch,a);


*/
int main1001()
{
	FILE * fp1 = fopen("../../f.txt", "w");
	if (!fp1)
		return -1;

	fprintf(fp1, "%d+%d=%d\n", 1, 2, 3);

	fclose(fp1);

	system("pause");
	return EXIT_SUCCESS;
}

int main1002()
{
	FILE * fp1 = fopen("../../f.txt", "r");
	if (!fp1)
		return -1;
	int a, b, c;
	fscanf(fp1, "%d+%d=%d\n", &a, &b, &c);

	printf("%d   %d   %d\n", a, b, c);


	fclose(fp1);
	return 0;
}
int main1003()
{
	FILE * fp1 = fopen("../../c.txt", "r");
	if (!fp1)
		return -1;


	int a, b, c;
	char ch;
	for (int i = 0; i < 100; i++)
	{
		fscanf(fp1, "%d%c%d=\n", &a, &ch, &b);
		printf("%d%c%d=\n", a, ch, b);
	}
	fclose(fp1);
	return 0;

}