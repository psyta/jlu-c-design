#include <stdio.h>
#include "function.h"
#include "controlPanel.h"

/* 编译 & 运行 ,在项目文件夹下
$ gcc main.c controlPanel.c - o main &&./ main
*/

int main(int argc, char const *argv[])
{
    mainControl();

    printf("Hello World\n");
    return 0;
}
