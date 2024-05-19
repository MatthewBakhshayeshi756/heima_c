#include <stdio.h>
#include <unistd.h>

int main()
{
    for (int i = 0; i <= 10; i++)
    {
        printf("\r");
        printf("进度:[");
        int j=0;
        for(j=0; j<i; j++){
            printf("=");
        }
        printf(">");
        for(int l=10-i;l>0 ;l--){
            printf(" ");
        }
        printf("] %d0%%", j);
        fflush(stdout);
        sleep(1);
    }
    printf("\n");

    return 0;
}