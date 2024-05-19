/**
 * 模拟实现彩色进度条：
*/
#include<stdio.h>
#include<unistd.h>
#define RED "\e[0;31m"
#define BLUE "\e[0;34m"
#define NONE "\e[0m"
#define GREEN "\e[0;32m"
#define YELLOW "\e[0;33;1m"
#define PURPLE "\e[0;35m"
#define GR "\e[0;36m"
int main()
{
    char bar[120];
    const char* lab = "|/-\\";
    int i = 0;
    while(i<=100)
    {
    if(i%10==1)
    {
       printf(RED"[%-100s][%d%%][%c]\r"NONE,bar,i,lab[i%4]);
    }
    else if(i%10==2)
    {
       printf(YELLOW"[%-100s][%d%%][%c]\r"NONE,bar,i,lab[i%4]);
    }
    else if(i%10==3) 
    {
       printf(BLUE"[%-100s][%d%%][%c]\r"NONE,bar,i,lab[i%4]);
    }
    else if(i%10==4)
    {
        printf(GREEN"[%-100s][%d%%][%c]\r"NONE,bar,i,lab[i%4]);
    }
    else if(i%10==5)
    {
        printf(PURPLE"[%-100s][%d%%][%c]\r"NONE,bar,i,lab[i%4]);

    }
        else
    {
        printf(GR"[%-100s][%d%%][%c]\r"NONE,bar,i,lab[i%4]);
    }
    fflush(stdout);
    bar[i] = '#';
    i++;
    bar[i]=0;
    usleep(100000);
    }
    printf("\n");
    return 0;

}  