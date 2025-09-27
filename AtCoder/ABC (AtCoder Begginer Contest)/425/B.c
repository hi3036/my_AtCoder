#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int judge = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j] && a[i] != -1 && a[j] != -1) judge = 1;
        }
    }

    if (judge == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
        return 0;
    }

    for (int i = 0; i < n; i++) {
        int fig = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] == i+1) {
                fig = 1;
            }
        }

        if (fig == 0) {
            for (int j = 0; j < n; j++) {
                if (a[j] == -1) {
                    a[j] = i+1;
                    break;
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (i != 0) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");

    return 0;
}