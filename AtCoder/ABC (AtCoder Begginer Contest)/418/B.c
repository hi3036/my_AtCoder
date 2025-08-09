#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void){
    char line[101];
    scanf("%s", line);

    //printf("%d", strlen(line));
    int length = strlen(line);

    double max = 0;
    for(int i = 0; i < length; i++){
        for(int j = i+1; j < length; j++){
            if(line[i] == 't' && line[j] == 't'){
                double t_count = 0;
                for(int k = i; k <= j; k++){//iからjまでのt_1からt_nまでのtの数
                    if(line[k] == 't'){
                        t_count++;
                    }
                }
                if(t_count >= 3){
                    double ju = (double)(t_count -2)/(((j-i)+1) -2);
                    if(ju > max){
                        max = ju;
                    }
                }
            }
        }
    }

    printf("%.12lf\n", max);
}