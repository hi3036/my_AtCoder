#include <stdio.h>
#include <math.h>

int main(void){
    char line[101];
    int n;
    scanf("%d", &n);
    scanf("%s", line);

    int judge = 0;
    if(line[n-3] == 't'){
        if(line[n-2] == 'e'){
            if(line[n-1] == 'a'){
                judge = 1;
            }
        }
    }

    if(judge > 0){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
}