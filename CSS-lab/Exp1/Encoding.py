# -*- coding: utf-8 -*-
"""
Created on Mon Jan 14 12:11:13 2019

@author: Manzar Shaikh
"""
 # Encoding = Substitution + Cipher
 
message = input("Enter the Message: ")
new_msg = []
for i in range(len(message)):
      if(ord(message[i]) != 32):
            new_msg.append(message[i])

mod_msg = []
mod = 3

for i in range(len(new_msg)):
      x = ((ord(new_msg[i]) + mod) % 97) % 26
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
msg = msg.T
output = []

for i in range(mod):
      for j in range(len(mod_msg) // mod):
            if(msg[i][j] != '*'):
                  output.append(msg[i][j])

print("Your Message is: {}" .format(message))
print("Your Encripted message is: {}".format(''.join(output)))