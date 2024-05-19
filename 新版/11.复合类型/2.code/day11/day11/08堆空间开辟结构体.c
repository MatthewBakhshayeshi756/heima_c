#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct tec
{
	char *name;//4
	int age;//4
}t;

int main08()
{
	struct tec * p = (struct tec *)malloc(sizeof(t) * 3);
	//p[i].name
	//struct tec ** p = (struct tec **)malloc(sizeof(struct tec *) * 3);
	//p[1]->name = 
	p->name = (char *)malloc(sizeof(char) * 21);

	strcpy(p->name, "Å£Áá");
	p->age = 18;

	printf("%s   %d\n", p->name, p->age);

	if (p->name  != NULL)
	{
		free(p->name);
		p->name = NULL;
	}

	if (p)
	{
		free(p);
		p = NULL;
	}


	printf("%d\n", sizeof(struct tec *));

	system("pause");
	return EXIT_SUCCESS;
}