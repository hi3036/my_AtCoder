#ifndef HI3036_H
#define HI3036_h

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define p() printf()
#define roop(i, n) for(int i = 0; i < n; i++)

static inline int changeLineToNumber(char* line){//入力された文字列を数に変換して出力
    int len = strlen(line);
    int number = 0;
    for (int i = 0; i < len; i++) {
        number += ((int)line[i] -48)* pow(10, (len-1)-i);
    }
    return number;
}

static inline int sumLineDigits(char* line){//入力された文字列形式の数の桁の数字の合計を出力
    int len = strlen(line);
    int sum = 0;
    for (int i = 0; i < len; i++) {
        sum += ((int)line[i] -48);
    }
    return sum;
}

static inline int sumNumberDigits(int fig){//入力された数の桁の数字の合計を出力
    int sum = 0;
    int count = 0;
    while(pow(10, count+1) <= fig) {//桁の計算
        count++;
    }
    for (int i = 0; i < count+1; i++) {//桁の数字を足していく
        float len = pow(10, count-i);
        sum += fig/len;
        fig -= (int)(fig/len)*len;
    }
    return sum;
}

static inline int* appToBack(int* box, int length, int inputNumber) {//int型配列の後ろに新しい要素を追加する
    int* new_box = (int*)malloc(sizeof(int) * (length +1));
    for(int i = 0; i < length; i++) {
        new_box[i] = box[i];
    }
    new_box[length] = inputNumber;
    return new_box;
}

static inline int* deleteNumber(int* box, int length, int number) {//int型配列から引数のnumberを探して消去する
    int* new_box = (int*)malloc(sizeof(int) * (length));
    int j = 0;
    for(int i = 0; i < length; i++) {
        if(i != number) {//削除対象じゃないならば
            new_box[j] = box[i];
            j++;
        }
    }
    return new_box;
}

static inline int isPrime(long fig){//素数なら1,でないならoを返す
    if(2 > fig) return 0;
    if(fig == 2) return 1;
    if(fig % 2 == 0) return 0;

    for(long i = 3; i <= pow(fig, 0.5); i += 2){
        if(fig % i == 0) return 0;
    }
    return 1;
}

#endif