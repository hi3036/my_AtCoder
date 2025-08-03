#include <stdio.h>

int main(void){
    int n, m;
    scanf("%d %d", &n, &m);

    int line[200001] = {};
    
    int max = 0;
    for(int i = 0; i < n; i++){
        int fig = 0;
        scanf("%d", &fig);
        line[fig]++;

        if(max < fig) max = fig;
    }

    for(int i = 0; i < m; i++){
        int fig = 0;
        scanf("%d", &fig);
        line[fig] += -1;
    }

    int i = 1;
    while(i <= max){
        if(line[i] > 0){//数値があったら
            if(i != 1) printf(" ");
            printf("%d", i/*linea[i]*/);
            line[i]--;

        }else{//数値が空なら
            i++;
        }
    }
    printf("\n");
    return 0;
}