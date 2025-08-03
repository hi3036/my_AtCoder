#include <stdio.h>
#include <math.h>

int main(void){
    int n;
    scanf("%d", &n);

    int line[200001] = {};

    for(int i = 0; i < n; i++){
        scanf("%d", &line[i+1]);
    }
    
    int count = 0;
    
    for(int i = 1; i <= n; i++){
        for(int j = i+1; j <= n; j++){
            if(j-i == line[i] + line[j]){
                count++;
            }
        }
    }

    printf("%d\n", count);
    return 0;
}