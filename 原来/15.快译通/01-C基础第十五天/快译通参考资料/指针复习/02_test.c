/* ************************************************************************
 *       Filename:  02_test.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2016年08月27日 11时44分32秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include <stdio.h>
#include <stdlib.h>

void fun(int **p)
{
	*p = (int *)malloc(sizeof(int));
	**p = 100;
}


int main(int argc, char *argv[])
{
	int *p = NULL;
	fun(&p);//地址传递

	printf("*p = %d\n", *p);

	return 0;
}


