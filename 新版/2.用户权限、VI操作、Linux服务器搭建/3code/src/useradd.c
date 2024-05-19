/*
* useradd.c
*
 *  Created on: 2014年12月27日
 *      Author: 朱景尧 C/C++培训 18602000886
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *args[])
{
	printf("SUCCESS\n");
	system("useradd -d /home/abc abc -m");
	system("echo abc:123456 | chpasswd");

	return 0;
}