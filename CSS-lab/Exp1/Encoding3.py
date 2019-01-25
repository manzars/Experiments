# -*- coding: utf-8 -*-
"""
Created on Mon Jan 14 14:12:57 2019

@author: Lenovo
"""

message = input("Enter the Message: ")
key = input("Enter the Key: ")
new_msg = []
for i in range(len(message)):
      if(ord(message[i]) != 32):
            new_msg.append(message[i])

mod_msg = []
mod = len(key)

for i in range(len(new_msg)):
      x = ((ord(new_msg[i]) + 3) % 97) % 26
      x = x + 97
      mod_msg.append(chr(x))

val = mod - len(mod_msg) % mod
if(val != mod):
      for i in range(val):
            mod_msg.append('*')

temp = []
matrix = []
k = 0

for i in range(len(mod_msg) // mod):
      for j in range(mod):
            temp.append(mod_msg[k])
            k = k + 1
      matrix.append(temp)
      temp = []

import numpy as np

msg = np.asarray(matrix)

# sorting

key = list(key)

z = zip(key, *list(msg))
z = list(z)

z.sort()

val = len(z[-1])
lst = []
temp = []

for i in range(mod):
      for j in range(1,val):
            lst.append(z[i][j])
      temp.append(lst)
      lst = []

temp = np.asarray(temp).T

temp = temp.T
output = []
lst = []

for i in range(mod):
      for j in range(len(mod_msg) // mod):
            if(temp[i][j] != '*'):
                  output.append(temp[i][j])

print("Your Message is: {}" .format(message))
print("Your Key is: {}" .format(''.join(key)))
print("Your Encripted message is: {}".format(''.join(output)))

