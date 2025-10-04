#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char s[10+1];
    scanf("%s", s);

    char first = s[0];
    char second;
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (first == s[i]) {
            count1++;
        } else if (first != s[i]) {
            second = s[i];
            count2++;
        }
    }

    if (count1 == 1) {
        printf("%c\n", first);
    } else {
        printf("%c\n", second);
    }

    return 0;
}