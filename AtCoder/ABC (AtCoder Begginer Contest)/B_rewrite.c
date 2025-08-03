/*▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲
参考にした解説
AtCoder Biginner Contest 417 B問題公式解説

URL: https://atcoder.jp/contests/abc417/editorial/13570
▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲*/


#include <stdio.h>

void show_box(int*, int);

int main(void){
    int n, m;
    scanf("%d %d", &n, &m);
    int line[n];
    int length = n;
    int new_length = length;
    
    for(int i = 0; i < n; i++){//配列の読み取り
        scanf("%d", &line[i]);
    }

    for(int i = 0; i < m; i++){
        int fig;
        scanf("%d", &fig);

        int judge = 0;
        for(int j = 0; j < length; j++){
            if(line[j] == fig && judge == 0){//ループ一回目して、数字が一致ならば
                judge = 1;
                new_length--;
            }
            if(judge == 1 && j+1 != length){
                line[j] = line[j + 1];
            }
        }
        length = new_length;
    }
        
    show_box(line, length);

    printf("\n");
    return 0;
}

//配列の出力
void show_box(int *box, int len){
    for(int i = 0; i < len; i++){
        if(i != 0) printf(" ");

        printf("%d", box[i]);
    }
    printf("\n");
}