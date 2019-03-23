# -*- coding: utf-8 -*-

'''
@author: manzars

'''

import numpy as np
N = int(input("How many no of pages"))
d = 0.8
eps = 1.0e-8
print("\nPlease enter the adjency Matxix for the Network")
print("Type 1 if there is there is a link from a page i to page j else type 0")
link = []
fot i in range(N):
  L = []
  L.append(int(input('page ' + str(i+1) + 'to page '+ str(j+1) + ': ')))
  links.append(L)

outbondl = np.zeros((N,), dtype = int)

for i in range(N):
  for j in range(N):
    if(links[j][i] = 1):
      outbondl[i] = outbondl[i] + 1
      
M = np.matrix(M)
oneColMat = np.matrix(np.ones((N, 1), dtype = int))

R = np.matrix(np.full((N, 1), 1/N))

while(true):
  Rnext = d*np.dot(M,R)+((1-d)/N)*oneColMat
  diff = np.subtract(Rnext, R)
  if(np.lin)