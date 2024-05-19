#include <stdio.h>

int  main(int argc, char *argv[]){
	printf("abc");
	printf("\r efg \n");

	printf("abc");
	printf("\b efg \n");
	printf("\123 = %d\n", '\123'); //8进制的转义字符
	printf("\x23 = %d\n", '\x23'); //16进制转义字符

	return 0;
}

