#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//�ṹ����Ҫ�����������ͽ����ڴ����
//struct stus
//{
//	char name[20];//20
//	unsigned int age;//4
//	char tel[15];//15
//	char sex;//1  52
//	float scores[3];//12
//}stu;

struct stus
{
	//char * p;   //4
	//char arr[2];//2  8
	//short d; //2   16
	//int c;  //4 
	//long g;//4    
	//double f;//8  24
	//float h[2];//8   40


	double f;//8  24
	float h[2];//8   40
	long g;//4    
	int c;  //4 
	char * p;   //4
	short d; //2   16
	char arr[2];//2  8


	/*
	������  char name[200];
	�ȼ��� int 
	��ǰ���飺int 
	������ int 
	������int 
	������ȴ��foat 

	*/


}stu;


int main03()
{
	
	printf("�ṹ���С%d\n", sizeof(stu));

	system("pause");
	return EXIT_SUCCESS;
}