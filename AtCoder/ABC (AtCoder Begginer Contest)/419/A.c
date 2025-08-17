#include <stdio.h>
#include <string.h>

int match(char*, char*);

int main(void) {
    char word[100 +1];
    scanf("%100s", word);

    if(match(word, "red") == 1) {
        printf("SSS\n");
    } else if(match(word, "blue") == 1) {
        printf("FFF\n");
    } else if(match(word, "green") == 1) {
        printf("MMM\n");
    } else {
        printf("Unknown\n");
    }

    return 0;
}

int match(char* word, char* judge) {
    int length = strlen(word);
    int length2 = strlen(judge);

    if(length == length2) {
        for(int i = 0; i < length; i++) {
            if(word[i] != judge[i]) {
                return 0;
            }
        }
        return 1;
    } else {
        return 0;
    }
}