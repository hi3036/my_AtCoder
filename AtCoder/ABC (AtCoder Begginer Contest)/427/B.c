#include <stdio.h>
#include <string.h>
#include <math.h>

int change(char*);
int sumFig(int);

int main(void) {
    int n;
    scanf("%d", &n);

    int a = 1;
    int sum = a;
    for (int i = 1; i <= n; i++) {
        a = sumFig(sum);
        //printf("%d is a:%d,,sum:%d\n", i, a, sum);
        sum += a;
    }
    printf("%d\n", sum-a);
    return 0;
}

int change(char* line){
    int len = strlen(line);
    int sum = 0;
    for (int i = 0; i < len; i++) {
        sum += ((int)line[i] -48)* pow(10, (len-1)-i);
    }
    return sum;
}

int sumFig(int fig){
    /*
    int sum = 0;
    for (int i = 0; i < fig; i++) {
        sum += ((int)line[i] -48) / pow(10, (len-1)-i);
    }
    */

    int sum = 0;
    int count = 0;
    while(pow(10, count+1) <= fig) {
        count++;
    }
    //printf("%f\n", pow(10, count+1));

    for (int i = 0; i < count+1; i++) {
        float len = pow(10, count-i);
        /*
        printf("10^%d = %f\n", count-i, pow(10, count-i));
        printf("10^%d = %f\n", count-i, len);
        printf("fig/%f = %f\n", len, fig/pow(10, count-i));
        */
        sum += fig/len;
        fig -= (int)(fig/len)*len;
    }
    return sum;
}

int sumFig2(char* line){
    int len = strlen(line);
    int sum = 0;
    for (int i = 0; i < len; i++) {
        sum += ((int)line[i] -48);
    }
    return sum;
}

