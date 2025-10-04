#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int change(int*, int, int, int);

int main(void) {
    int n, q;
    scanf("%d %d", &n, &q);

    int ver[n];
    for (int i = 0; i < n; i++) {
        ver[i] = i + 1;
    }

    for (int i = 0; i < q; i++) {
        int x, y;
        scanf("%d%d", &x, &y);
        printf("%d\n", change(ver, n, x, y));
    }
    
    return 0;
}

int change(int* box, int n, int x, int y) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (box[i] <= x) {
            box[i] = y;
            count++;
        }
    }
    return count;
}