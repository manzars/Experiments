# -*- coding: utf-8 -*-
import pandas as pd
import numpy as np
import matplotlib as mpl
import matplotlib.pyplot as plt


#importing dataset

dataset = pd.read_csv('Salary_Data.csv')
X = dataset.iloc[:,:-1].values
y = dataset.iloc[:,-1:].values

from sklearn.model_selection import train_test_split #used model_selection in place of cross validation since the latter is deprecated

X_train, X_test, y_train, y_test = train_test_split(X,y,test_size = 1/3, random_state = 0)


#fitting simple linear regression to the training set
from sklearn.linear_model import LinearRegression

#splitting the dataset into the training asd test sets


regressor = LinearRegression()
regressor.fit(X_train, y_train)

#predicting the test set results
y_pred = regressor.predict(X_test)


#visualising the training_set results

plt.scatter(X_train, y_train, color='red')
plt.plot(X_train, regressor.predict(X_train), color="blue")
plt.title("Salary Vs Experience (Training set)")
plt.xlabel("Years of Experience")
plt.ylabel("Salary")
plt.show()


#visualising the training_set results

plt.scatter(X_test, y_test, color='red')
plt.plot(X_test, regressor.predict(X_test), color="blue")
plt.title("Salary Vs Experience (Test set)")
plt.xlabel("Years of Experience")
plt.ylabel("Salary")
plt.show()