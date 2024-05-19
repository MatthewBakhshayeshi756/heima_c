#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct stuinfo
{
	char *name;
	int age;
};

int main06()
{
	struct  stuinfo si;
	si.name = (char *)malloc(sizeof(char)* 21);

	strcpy(si.name, "уехЩ");
	si.age = 18;

	printf("%s   %d\n", si.name, si.age);

	free(si.name);


	system("pause");
	return EXIT_SUCCESS;
}