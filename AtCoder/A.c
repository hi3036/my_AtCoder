#include <stdio.h>
int main(void){
    int n,m;
    scanf("%d %d", &n, &m);

    int sum = 0;
    for(int i = 1; i <= n; i++){
        int item;
        scanf("%d", &item);
        sum = sum + item;
    }

    if(sum <= m){//かばんに入るとき
        printf("Yes\n");
    }else{
        printf("No\n");
    }
}