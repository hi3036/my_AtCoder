#include <stdio.h>
#include <math.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += pow(-1, i)*pow(i, 3);
    }

    printf("%d\n", sum);
    return 0;
}