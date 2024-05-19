#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    printf("Start hello.bin\n");
    int a = system("./hello.bin");
    printf("  system(\"./hello.bin\")的返回值=%d\n", a);
    printf("Start gnome-calculator\n");
    system("/bin/gnome-calculator");
    printf("  system\"/bin/gnome-calculator\")的返回值=%d\n", a);

    return 0;
}
