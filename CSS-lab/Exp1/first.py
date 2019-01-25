import matplotlib.pyplot as ptr
import pandas as pd
import numpy as np

data = pd.read_csv("Data.csv")
x = data.iloc[:,:-1]
y = data.iloc[:,3]