#include <stdio.h>
int main(void) {
    int n;//羽数]
    int m;//[種類]
    scanf("%d %d", &n, &m);

    int birdType[n];//[番号]:種類
    int birdWeight[n];//[番号]:大きさ
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &birdType[i], &birdWeight[i]);
    }

    for (int i = 0; i < m; i++) {
        int sum = 0;
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (birdType[j] == i+1) {
                sum += birdWeight[j];
                count++;
            }
        }
        printf("%.10f\n", (float)sum/count);
    }
}