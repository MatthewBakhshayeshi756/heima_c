#include <stdio.h>

int main(int argc, char *argv[]){
    int data1 = 10;
    int data2 = 50;
    int result;

    asm(
        "pusha;"
        "movl data1, %eax; movl data2, %ebx;"
        "imull %ebx, %eax; movl %eax, result; popa\n\t"
    );
    printf("%d*%d = %d\n", data1, data2, result);

    return 0;
}
