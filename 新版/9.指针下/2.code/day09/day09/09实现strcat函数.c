#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void mystrcat(char * arr,char * s1)
{
	//while (*arr)
	//	arr++;
	//while (*arr++ = *s1++);
	while (*arr)
		arr++;
	while (*s1)
	{
		*arr = *s1;
		arr++;
		s1++;
	}
	*arr = '\0';
}
int main09()
{
	char arr[100] = "hello";
	char * s1 = "world";
	mystrcat(arr, s1);
	printf("%s\n", arr);



	//system("pause");
	return EXIT_SUCCESS;
}


