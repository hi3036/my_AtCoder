#include <stdio.h>

int judgeLine(char[], char[]);

int main(void) {
    char x[10];
    char y[10];
    scanf("%s%s", x, y);

    int xVer, yVer;
    if (judgeLine(x, "Ocelot") == 0) {
        xVer = 1;
    } else if (judgeLine(x, "Serval") == 0) {
        xVer = 2;
    } else {//x == "Lynx"
        xVer = 3;
    }

    if (judgeLine(y, "Ocelot") == 0) {
        yVer = 1;
    } else if (judgeLine(y, "Serval") == 0) {
        yVer = 2;
    } else {//y == "Lynx"
        yVer = 3;
    }

    if (xVer >= yVer) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
}

int judgeLine(char x[], char y[]) {
    for(int i = 0; i < strlen(x); i++) {
        if (x[i] != y[i]) return -1;
    }
    return 0;
}