#include <stdio.h>

void back(int, int*, int);
void show(int, int, int*);

int main(void) {
    int n, q;
    scanf("%d%d", &n, &q);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < q; i++) {
        int query;
        scanf("%d", &query);
        if (query == 1) {
            int c;
            scanf("%d", &c);
            back(n, a, c);
        } else {//query == 2
            int l, r;
            scanf("%d%d", &l, &r);
            show(l, r, a);
        }
    }

    return 0;
}

void back(int n, int* box, int count) {
    int set = count%n;
    int replace[set];
    for (int i = 0; i < set; i++) {
        replace[i] = box[i];
    }
    
    int index = 0;
    for (int i = 0; i < n-1; i++) {
        box[i] = box[i+set];
    }
    int kk = 0;
    for (int i = n-set; i < n; i++) {
        box[i] = replace[kk];
        kk++;
    }
}

void show(int start, int end, int* box) {
    int sum = 0;
    for (int i = start-1; i <= end-1; i++) {
        sum += box[i];
    }
    printf("%d\n", sum);
}