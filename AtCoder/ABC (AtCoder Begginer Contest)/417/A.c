#include <stdio.h>

int main(void){
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);
    char line[100];
    scanf("%s", line);

    for(int i = a; i < n-b; i++){
        printf("%c", line[i]);
    }
    printf("\n");

    return 0;
}