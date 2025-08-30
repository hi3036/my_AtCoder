#include <stdio.h>
#include <string.h>

int match(char[], char[]);

int main(void) {
    int n;
    scanf("%d", &n);

    char box[n][10+1];
    for(int i = 0; i < n; i++) {
        scanf("%s", box[i]);
    }

    int x;
    char word[10+1];
    scanf("%d %s", &x, word);

    if(match(word, box[x-1]) == 0) {
        printf("No\n");
        return 0;
    }

    printf("Yes\n");
    return 0;    
}

int match(char word[], char box[]) {//wordが単語、boxが単語の山
    int length = strlen(word);
    int legth2 = strlen(box);
    if(length != legth2) return 0;
    for(int i = 0; i < length; i++) {
        if(word[i] != box[i]) return 0;
    }
    return 1;
}