#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Color
{
    char *colorinfo; // color=green
    char *color_code; // #FF0000
};

void InitColor(struct Color *c1, char *colorinfo);

void ColorPrint(struct Color *c1, char *path, char *text);