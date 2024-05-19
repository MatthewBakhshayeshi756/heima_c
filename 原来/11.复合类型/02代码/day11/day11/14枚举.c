#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

enum colors
{
	red=10,bule,yellow=20,black,white,green
}clo;
/*
	插卡
	输入密码
	锁定
	取款
	查询
	退卡
	锁定解除

*/
/*
10
	移动
	攻击
	技能
	死亡
20
	亮牌子
	跳舞


*/
int main14()
{
	clo = 0;

	int val;
	scanf("%d", &val);
	switch (val)
	{
	case red:
		break;
	case bule:
		break;
	case yellow:
		break;
	case black:
		break;
	case white:
		break;
	case green:
		break;
	default:
		break;
	}
	//switch (val)
	//{
	//case red:
	//	printf("请输入您的密码");
	//	clo = 1;
	//	printf("红色\n");
	//	break;
	//case bule:
	//	printf("");
	//	clo = 2;
	//	clo = 3;
	//	clo = 4;

	//	printf("蓝色\n");

	//	break;
	//case yellow:
	//	printf("黄色\n");

	//	break;
	//case black:
	//	break;
	//case white:
	//	break;
	//case green:
	//	break;
	//default:
	//	break;
	//}

	system("pause");
	return EXIT_SUCCESS;
}