#include <stdio.h>
#include <string.h>
#include "color.h"


int main(int argc, char *argv[]) {

    for(int i = 0; i < argc; i++) {
        printf("argv[%d] = %s\n", i, argv[i]);
    }

    if (argc == 1) {
        printf("\033[1;35m%s\033[0m\n", "hello wolrd"); // default str : hello wolrd
        return 0;
    }

    if (argc == 2) {
        printf("\033[1;35m%s\033[0m\n", argv[1]); // default color : pink
        return 0;
    }
    
    // 检查是否传递了足够的参数
    // if (argc < 3) {
    //     printf("使用方法: %s color=<color> <string>\n", argv[0]);
    //     return 1;
    // }

    struct Color c1;

    InitColor(&c1, argv[1]);

    ColorPrint(&c1, argv[0], argv[2]);

    return 0;
}
