#include <stdio.h>
#include <string.h>
#include <math.h>

long judgeDigit(long);
long tenMath(long);
long reverse(long);


int main(void) {
    long x, y;
    scanf("%ld %ld", &x, &y);

    long a[10+1];
    a[1] = x;
    a[2] = y;
    for(int i = 3; i <= 10; i++) {
        a[i] = reverse(a[i-1] + a[i-2]);
    }
    printf("%ld\n", a[10]);
}

long judgeDigit(long fig) {//与えられた数字が何桁か計算
    long count = 0;
    while(fig > 0) {
        fig /= 10;
        count++;
    }
    return count;
}

long tenMath(long ten_number) {//10^numberをつくる
    long sum = 1;
    for(long i = 1; i <= ten_number; i++) {
        sum *= 10;
    }
    return sum;
}

long reverse(long fig) {
    long digit = judgeDigit(fig);//与えられた数字が何桁か計算
    long sum = 0;
    for(long i = 1; i <= digit; i++) {//[digit +1] -[元の桁]が、結果としての桁にしたい
        long buf = fig/tenMath(((digit+1) -i) -1);//最大の桁の数を摘出
        fig -= buf*tenMath(((digit+1) -i) -1);
        sum += buf*tenMath(i-1);
    }
    
    return sum;
}