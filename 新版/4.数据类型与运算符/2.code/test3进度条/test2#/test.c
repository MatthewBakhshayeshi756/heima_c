#include<stdio.h>
#include<unistd.h>
int main()
{
    int i = 0;
    char bar[120];
    const char *lable = "|/-\\";
    while (i <= 100)
    {
        //%-s和%s是补空格
        printf("[%-100s][%d%%][%c]\r", bar, i, lable[i % 4]);
        fflush(stdout);
        bar[i] = '#';
        i++;
        bar[i] = 0;
        usleep(100000);
    }
    printf("\n");
    return 0;
}
