#include <stdio.h>
int main(void) {
    int w, b;
    scanf("%d %d", &w, &b);

    w = w *1000;

    int num = 0;
    while(w >= b *num) {
        num++;
    }
    printf("%d\n", num);
}