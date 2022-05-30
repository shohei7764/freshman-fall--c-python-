# pandas を別名 pd として import

#課題１
import pandas as pd

# DataFarme オブジェクトの作成
df = pd.DataFrame({
                    "性別":["F","F","F","M","M","M"],
                    "体重":[40.0,45.0,50.0,70.0,60.0,65.0],
                    "身長":[155.0,160.0,165.0,180.0,175.0,170.0],
                    "英語":[150,145,160,130,160,140],
                    "数学":[130,135,140,150,120,140],
                    "国語":[140,135,150,120,150,130],
                    "社会":[80,75,90,60,90,70],
                    "理科":[70,75,80,90,60,80]
                  } , 
                  index=["A","B","C","D","E","F"]
                  )

print("数学の点数が平均点以上の学生グループの理科の平均点")
print(df[(df["数学"]>=df["数学"].mean())]["理科"].mean())
print("")
print("数学の点数が平均点未満の学生グループの理科の平均点")
print(df[(df["数学"] < df["数学"].mean())]["理科"].mean())

#課題２
!pip install japanize-matplotlib

import matplotlib
import japanize_matplotlib
import matplotlib.pyplot as plt
import pandas as pd

japanize_matplotlib.japanize()

from sklearn import datasets

boston_data = datasets.load_boston()
boston_df = pd.DataFrame(boston_data.data, columns=boston_data.feature_names)