// 二分法
#include <stdio.h>
#include <stdlib.h> // exit 関数を用いる為に必要
#include <math.h>   // fabs 関数を用いる為に必要


double  f(double x);      // 関数 f(x) のプロトタイプ宣言


#define A (1.0)           // f(A) < 0 となるような A を設定
#define B (2.0)           // f(B) > 0 となるような B を設定
#define E (1.0e-10)       // 収束判定に用いる

int main()
{
    // 使用する変数の宣言
    double a, b, c, e, fc;
    int i;

    // 変数の初期化
    i = 0;
    a = A;
    b = B;
    e = E;

    // A, B の値の妥当性チェック
    if( !( (f(a) < 0) && (f(b) > 0) ) )
    {
        printf("A, B の値が不適切です。\n");
        // プログラムを終了させる標準関数
        exit(0);
    }

    // 二分法アルゴリズム
    // |a-b| / 2 > e の間繰り返す
    while( fabs(a - b) / 2.0 > e )
    {
        c = (a + b) / 2.0;

        fc = f(c);

        i++;

        // 繰り返しの回数 i と c の値を表示
        // %10.8lf とは、全部で10文字、小数点以下8桁で表示するという意味
        printf("%d %10.8lf\n", i, c);

        // c の符号により a または b に c を代入
        if( fc > 0.0 )
        {
            b = c;
        }
        else if( fc < 0.0 )
        {
            a = c;
        }
        // fc == 0.0 であれば、c は根であるから繰り返し文を強制的に抜ける
        else
        {
            // break 文によって強制的に繰り返し文を抜けることができる
            break;
        }
    }
}

// 関数 f(x) の定義
double f( double x )
{
    return (x*x - 2.0);
}