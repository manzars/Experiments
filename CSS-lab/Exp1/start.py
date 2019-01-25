#importing important library for ML
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt

#importing Data and seperating dependent values
data = pd.read_csv('Data.csv')
x = data.iloc[:,:-1].values
y = data.iloc[:,3].values

#dealing with missing data
from sklearn.preprocessing import Imputer, OneHotEncoder, LabelEncoder
imputer = Imputer(missing_values = 'NaN', strategy = 'mean', axis = 0)
imputer = imputer.fit(x[:,1:3])
x[:,1:3] = imputer.transform(x[:,1:3])

#encoding labels cuz ML model only understand numerical value
labelEncoder_x = LabelEncoder()
x[:,0] = labelEncoder_x.fit_transform(x[:,0])

labelEncoder = LabelEncoder()
y = labelEncoder.fit_transform(y)

oneHotEncoder = OneHotEncoder(categorical_features = [0])
x = oneHotEncoder.fit_transform(x).toarray()

#spliting th data in training and test set
from sklearn.model_selection import train_test_split
x_train, x_test, y_train, y_test = train_test_split(x, y, test_size = 0.2, random_state = 0)

#feature Scaling
from sklearn.preprocessing import StandardScaler
sc_x = StandardScaler()
x_test = sc_x.fit_transform(x_test)
x_train = sc_x.transform(x_train)