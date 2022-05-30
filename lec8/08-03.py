# matplotlibのpyplotモジュールをpltという名前としてインポート 
import matplotlib.pyplot as plt

# グラフを描画するためのデータを格納するリスト
a = [1,3,8,12,34,56]

# リストa内のデータを折れ線グラフとして描画
plt.plot(a, color="red", label="data")

# 凡例の表示
plt.legend()

# グラフの表示
plt.show()
