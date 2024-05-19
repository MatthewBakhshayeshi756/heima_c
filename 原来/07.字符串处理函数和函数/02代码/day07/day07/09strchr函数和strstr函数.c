#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main09()
{

	char arr[] = "hee込eello world";
	char ch = 'l';
	char ha[] = "込込込込";
	//char * p=strchr(arr, '込');//"込"込\0
	//if (strchr(arr, 104) != NULL)
	//{
	//	printf("孀欺阻��");
	//}


	char *p1=strstr(arr, "込");
	printf("%s", p1);

	system("pause");
	return EXIT_SUCCESS;
}