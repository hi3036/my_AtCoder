#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int* delete(int*, int, int);
int* app_b(int*, int, int);
void small_sort(int*, int);

int main(void) {
    int q;
    scanf("%d", &q);

    int* box = malloc(100 +1);
    int length = 0;

    for(int i = 0; i < q; i++) {
        int fig;
        scanf("%d", &fig);

        if(fig == 1) {
            int x;
            scanf("%d", &x);

            int* buf = app_b(box, length, x);
            free(box);
            box = buf;
            length++;

        }else if(fig == 2) {
            small_sort(box, length);
            printf("%d\n", box[0]);

            int* buf = delete(box, length, 0);
            free(box);
            box = buf;
            length--;
        } else {

        }
    }
    
}


int* app_b(int* box, int length, int number) {
    int* new_box = malloc(sizeof(int) * (length +1));
    for(int i = 0; i < length; i++) {
        new_box[i] = box[i];
    }
    new_box[length] = number;

    return new_box;
}

int* delete(int* box, int length, int number) {
    int* new_box = malloc(sizeof(int) * (length));
    int j = 0;
    for(int i = 0; i < length; i++) {
        if(i != number) {//削除対象じゃない
            new_box[j] = box[i];
            j++;
        }
    }

    return new_box;
}

void small_sort(int* box, int length) {
    for(int i = 0; i < length-1; i++) {
        int mini_index = i;/*各ループの最小値のインデックスをこれにする*/
        
        for(int j = i+1; j < length; j++) {
            if(box[mini_index] > box[j]) {
                mini_index = j;
            }
        }
        if(mini_index != i) {
            int buf = box[i];
            box[i] = box[mini_index];
            box[mini_index] = buf;
        }
    }
}