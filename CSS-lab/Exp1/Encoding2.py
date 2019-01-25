# -*- coding: utf-8 -*-
"""
Created on Mon Jan 14 14:07:40 2019

@author: Manzar Shaikh
"""

message = input("Enter the Message: ")
new_msg = []
for i in range(len(message)):
      if(ord(message[i]) != 32):
            new_msg.append(message[i])

mod_msg = []
mod = 3

for i in range(len(new_msg)):
      x = ((ord(new_msg[i]) + 3) % 97) % 26
      x = x + 97
      mod_msg.append(chr(x))

lst1, lst2 = [], []

for i in range(len(mod_msg)):
      if(i % 2 != 0):
            lst1.append(mod_msg[i])
      else:
            lst2.append(mod_msg[i])
output = lst1 + lst2

print("Your Message is: {}" .format(message))
print("Your Encripted message is: {}".format(''.join(output)))