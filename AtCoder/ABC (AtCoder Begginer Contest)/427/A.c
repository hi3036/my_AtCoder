#include <stdio.h>
#include <string.h>

int main(void) {
    char s[10];
    scanf("%s", s);

    int harf = (strlen(s) +1) / 2;

    for (int i = 0; i < strlen(s); i++) {
        if (i+1 != harf) printf("%c", s[i]);
    }
    printf("\n");
    return 0;
}