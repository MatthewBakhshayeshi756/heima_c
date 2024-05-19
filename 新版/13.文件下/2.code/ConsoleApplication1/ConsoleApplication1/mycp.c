//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <time.h>
//
//int maintest(int argc,char * argv[])
//{
//	unsigned int start_time= time(NULL);
//	//if(argc < 3)
//	//{
//	//	printf("缺少参数\n");
//	//	return -1;
//	//}
//	//mycp    wow.2.mp4 wow.3.mp4
//	//argv[0] argv[1]   arr[2]
//	FILE * fp1 = fopen("../../test.avi","rb");
//	FILE * fp2 = fopen("../../test1.avi","wb");
//	if(!fp1 || !fp2)
//	{
//		printf("操作文件失败\n");
//		return -2;
//	}
//
//	char ch[1024];
//	while(!feof(fp1))
//	{
//		memset(ch,0,1024);
//		fgets(ch,1024,fp1);
//		fputs(ch,fp2);	
//		fflush(fp1);
//		fflush(fp2);
//	}	
//
//
//	fclose(fp1);
//	fclose(fp2);
//	unsigned int end_time=time(NULL);
//	
//	printf("花费时间：%d(s)\n",end_time-start_time);
//	
//	return 0; 
//
//}
//
