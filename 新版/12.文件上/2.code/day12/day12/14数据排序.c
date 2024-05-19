#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <time.h>
//随机 100000 数据  1-1000  写入到文件中   读取出来 进行从小到大的排序  在写入到文件中
int main1401()
{
	srand((unsigned int)time(NULL));
	FILE * fp = fopen("../../g.txt", "w");
	if (!fp)
		return -1;

	for (int i = 0; i < 100000; i++)
	{
		fprintf(fp, "%d\n", rand() % 1000 + 1);
	}
	fclose(fp);


	system("pause");
	return EXIT_SUCCESS;
}

int main1402()
{
	unsigned int start_time = time(NULL);
	FILE * fp = fopen("../../g.txt", "r");
	if (!fp)
		return -1;
	int *p = (int *)malloc(sizeof(int) * 100000);

	for (int i = 0; i < 100000; i++)
		fscanf(fp, "%d\n", &p[i]);

	for (int i = 0; i < 100000 - 1; i++)
	{
		for (int j = 0; j < 100000 - i - 1; j++)
		{
			if (p[j] > p[j + 1])
			{
				int temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
		}
	}

	fclose(fp);

	fp = fopen("../../g.txt", "w");
	if (!fp)
		return -1;
	for (int i = 0; i < 100000; i++)
		fprintf(fp, "%d\n", p[i]);
	fclose(fp);

	free(p);

	unsigned int end_time = time(NULL);
	printf("用时时间：%d(s)\n", end_time - start_time);
	return 0;
}
//10000人年龄排序
int main()
{
	unsigned int start_time = time(NULL);

	FILE * fp = fopen("../../g.txt", "r");
	if (!fp)
		return -1;
	int arr[1000] = {0};
	int value;
	//int sum = 0;
	for (int i = 0; i < 100000; i++)
	{
		fscanf(fp, "%d\n", &value);
		arr[value - 1]++;
	}
	fclose(fp);

	fp = fopen("../../g.txt", "w");
	if (!fp)
		return -1;
	for (int i = 0; i < 1000; i++)
		for (int j = 0; j < arr[i]; j++)
			fprintf(fp, "%d\n", i + 1);
	fclose(fp);
	unsigned int end_time = time(NULL);
	printf("用时时间：%d(s)\n", end_time - start_time);

}