#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char fileName[256];
	printf("«Î ‰»ÎŒƒº˛£∫\n");
	scanf("%s", fileName);
	getchar();

	FILE * fp = fopen(fileName, "w");
	if (!fp)
		return -1;

	char buf[1024];
	while (1)
	{
		fgets(buf, 1024, stdin);
		if (!strncmp(buf, "comm=exit", 9))
			break;

		fputs(buf, fp);
		fflush(fp);
	}
	fclose(fp);

	//FILE * p = _popen()
	//_pclose
	return EXIT_SUCCESS;
}