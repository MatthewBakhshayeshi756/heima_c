#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main101()
{
	//char arr[16] = "hello world";

	int arr[] = { 888888,888888,888888,888888,5,6,7,8,10 };//0000 0001

	FILE * fp = fopen("../../b.txt", "wb");
	if (!fp)
		return -1;

	fwrite(arr, sizeof(int), 4, fp);
	//fprintf(fp, "888888888888888888888888");

	fclose(fp);

	return EXIT_SUCCESS;
}
int main102()
{
	FILE * fp = fopen("../../b.txt", "rb");
	if (!fp)
		return -1;

	int arr[10] = {0};
	int i = 0;
	while (!feof(fp))
	{
		fread(&arr[i++], sizeof(int), 1, fp);//888888
	}

	fclose(fp);


	printf("%d\n", arr[0]);
	printf("%d\n", arr[1]);
	printf("%d\n", arr[2]);
	printf("%d\n", arr[3]);
	return -1;


}