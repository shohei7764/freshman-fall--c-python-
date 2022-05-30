# 関数の定義（x*x-2.0 を計算する関数）
def f(x):
  return x*x - 2.0


# 変数の初期化
a = 1.0
b = 2.0
e = 1.0e-10
i = 0

# 初期値a, b の値の妥当性チェック
if not ( f(a)<0.0 and f(b)>0.0 ):
  print("a, b の値が不適切です。")

else:
  # 二分法アルゴリズム
  # |a-b| / 2 > e の間繰り返す
  while abs(a-b) / 2.0 > e:

    # aとbの中点cとf(c)の計算
    c = (a + b) / 2.0
    fc = f(c)
    i += 1

    # 繰り返しの回数 i と c の値を表示
    print("i=", i, "  c=", c)

    # c の符号により a または b に c を代入
    if fc > 0.0:
      b = c
    elif fc < 0.0:
      a = c
    # fc == 0.0 であれば、c は根であるから繰り返し文を強制的に抜ける
    else:
      break