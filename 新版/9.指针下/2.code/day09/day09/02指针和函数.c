#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void tab1(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	printf("%d    %d\n", a, b);
	return;
}

int main201()
{
	int a = 10;
	int b = 20;
	tab1(a, b);
	//printf("%d    %d\n", a, b);

	system("pause");
	return EXIT_SUCCESS;
}
void tab(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main202()
{

	int a = 10;
	int b = 20;
	tab(&a, &b);
	printf("%d   %d\n", a, b);

	tab1(a, b);
	return 0;
}