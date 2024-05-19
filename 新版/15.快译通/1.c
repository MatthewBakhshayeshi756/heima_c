#include<stdio.h>
#include<stdlib.h>
void fun1(int i, int j);


void fun(int i,int j)
{

	if (i == 9 && j == 9)
	{
		printf("%d*%d=%d", i, j, i*j);
	}
	else
	{
		

		fun1(i, j);
		fun(i + 1, 1);
		
	}


}

void fun1(int i, int j)
{

	if (j > 9)
	{
		printf("\n");
		return;
	}
	else
	{
		printf("%d*%d = %d", i, j, i*j);
		fun1(i, j + 1);
	}



}

int main()
{
	fun(1, 1);



}