#include "color.h"

void InitColor(struct Color *c1, char *colorinfo) {
    c1->colorinfo = colorinfo;
}

void ColorPrint(struct Color *c1, char *path, char *text) {
        // 解析颜色参数
    if (strncmp(c1->colorinfo, "color=", 6) == 0) {
        char *color = c1->colorinfo + 6;

        if (strcmp(color, "red") == 0) {
            c1->color_code = "\033[1;31m";
        } else if (strcmp(color, "green") == 0) {
           c1-> color_code = "\033[1;32m";
        } else if (strcmp(color, "yellow") == 0) {
            c1->color_code = "\033[1;33m";
        } else if (strcmp(color, "blue") == 0) {
            c1->color_code = "\033[1;34m";
        } else if (strcmp(color, "magenta") == 0) { // 粉色
            c1->color_code = "\033[1;35m";
        } else if (strcmp(color, "cyan") == 0) {
            c1->color_code = "\033[1;36m";
        } else if (strcmp(color, "white") == 0) {
            c1->color_code = "\033[1;37m";
        } else {
            printf("invalid color.\n");
            return ;
        }
    } else {
        printf("颜色参数格式错误。使用方法: %s color=<color> <string>\n", path);
        return ;
    }

    // 获取输出的字符串
    // text = argv[2];

    // 输出带有指定颜色的字符串
    printf("%s%s\033[0m\n", c1->color_code, text);
}