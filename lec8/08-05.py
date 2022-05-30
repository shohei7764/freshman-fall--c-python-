# matplotlibのpyplotモジュールをpltという名前としてインポート 
import matplotlib.pyplot as plt

# グラフを描画するためのデータを格納するリスト
x = [2, 4, 6, 9, 12, 15]
a = [1,3,8,12,34,56]

# 折れ線グラフを描画
plt.plot(x,a)

# 棒グラフグラフを描画
plt.bar(x,a)

# 折れ線グラフを描画
plt.scatter(x,a)

# グラフの表示
plt.show()