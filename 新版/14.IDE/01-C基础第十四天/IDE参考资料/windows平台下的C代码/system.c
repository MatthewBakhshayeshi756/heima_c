#include <stdio.h>
#include <stdlib.h>

int main()
{
	//�������
	int flag;
	
	//��windowsƽ̨�£�system�ɹ����ã�����ֵΪ0
	flag = system("gcc hello.c -o hello");
	if(flag != 0)
	{//����ʧ�ܣ��жϳ���
		return -1;
	}
	
	//ִ�е��⣬˵���������ɹ�����ʼִ�г���
	//cmd /k �����������ն���ͣ
	//system("hello");
	system("cmd /k hello");
	
	
	return 0;
}