/*▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲
参考にした解説
AtCoder Biginner Contest 417 C問題公式解説

URL: https://atcoder.jp/contests/abc417/editorial/13577
▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲▼▲*/

#include <stdio.h>
#include <math.h>

#define neutral 400000

int main(void){
    int n;
    scanf("%d", &n);

    long dic[800001] = {};//400000を0と仮定し、マイナスとプラスの両方に対応

    long long sum = 0;
    //A_i + i = j - A_j を調べていく
    for(int i = 0; i < n; i++){
        int line = 0;
        scanf("%d", &line);
        
        sum += dic[neutral+ (i-line)];//j - A_j の結果

        dic[neutral+ (line+i)]++;//A_i + iの組み合わせの結果の数を保存
    }

    printf("%lld\n", sum);
    return 0;
}