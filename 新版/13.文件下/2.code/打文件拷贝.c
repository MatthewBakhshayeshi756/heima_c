#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include<sys/types.h>
#include <sys/stat.h>
//10M��С
#define MAXSIZE 1024*1024*10


int main(int argc,char * argv[])
{
	unsigned int start_time= time(NULL);
	if(argc < 3)
	{
		printf("ȱ�ٲ���\n");
		return -1;
	}
	//mycp    wow.2.mp4 wow.3.mp4
	//argv[0] argv[1]   arr[2]
	FILE * fp1 = fopen(argv[1],"r");
	FILE * fp2 = fopen(argv[2],"w");
	if(!fp1 || !fp2)
	{
		printf("�����ļ�ʧ��\n");
		return -2;
	}
	
	//��ȡ�ļ�����
	struct stat *s = NULL;
	//��ȡԴ�ļ�
	stat(argv[1],s);
	char * ch;
	int maxSize=0;
	if(s->st_size < MAXSIZE)
	{
		maxSize =s->st_size;
		ch = (char *)malloc(sizeof(char)*s->st_size);
	}
	else
	{
		maxSize = MAXSIZE;
		ch = (char *)malloc(sizeof(char)*MAXSIZE);
	}
	while(!feof(fp1))
	{
		//memset(ch,0,maxSize);
		int len = fread(ch,1,100,fp1);//123
		fwrite(ch,1,len,fp2);	
	}	


	fclose(fp1);
	fclose(fp2);

	free(ch);
	unsigned int end_time=time(NULL);
	
	printf("����ʱ�䣺%d(s)\n",end_time-start_time);
	
	return 0; 

} 