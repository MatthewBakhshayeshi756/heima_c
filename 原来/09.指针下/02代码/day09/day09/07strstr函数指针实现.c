#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*
1、两个匹配的字符串 必须完全匹配  匹配个数 = 字符串长度
2、如果配匹一个字符串，需要记录被匹配字符串地址
3、如果匹配一半未成功 回到记录被匹配字符串地址+1
4、如果匹配的被匹配字符串的结尾  匹配个数 不等于 字符串长度
*/

char * mystrstr(char * dest, char *src)
{
	char * p = NULL;
	char * temp = src;
	while (*dest)//
	{
		p = dest;
		while (*dest == *temp && *dest)//匹配个数 = 字符串长度 l l     l o
		{
			dest++;
			temp++;
		}
		if (!*temp)//\0
			//if (*temp=='\0')//\0
			return p;
		else
			temp = src;
		dest = p;
		dest++;
	}

	//返回值结果
	//return p;
	return NULL;
}

int main07()
{

	char *p = mystrstr("helllo", "lol");
	printf("%s\n", p);

	system("pause");
	return EXIT_SUCCESS;
}