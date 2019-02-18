# -*- coding: utf-8 -*-
"""
Aim: Design and Implementation of product cipher using substitution and transposition cipher
@author: Manzar Shaikh
Roll no: 16CO50
"""
def tp1(message):
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
      
      print("Your Message is: {}\n" .format(message))
      print("Your Encripted message is: {}\n".format(''.join(output)))
      
def tp2(message):
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
      
      lst1, lst2 = [], []
      
      for i in range(len(mod_msg)):
            if(i % 2 != 0):
                  lst1.append(mod_msg[i])
            else:
                  lst2.append(mod_msg[i])
      output = lst1 + lst2
      
      print("Your Message is: {}\n" .format(message))
      print("Your Encripted message is: {}\n".format(''.join(output)))
      
def tp3(message):
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
      
      print("Your Message is: {}\n" .format(message))
      print("Your Key is: {}\n" .format(''.join(key)))
      print("Your Encripted message is: {}\n".format(''.join(output)))
      
def main():
      while(1):
            print("Enter the type of Encoding\n1. Type 1\n2. Type 2\n3. Type 3\n4. Exit")
            Type = int(input("Enter the Choice\n"))
            if(Type == 1):
                  message = input("Enter the Message: ")
                  tp1(message)
            elif(Type == 2):
                  message = input("Enter the Message: ")
                  tp2(message)
            elif(Type == 3):
                  message = input("Enter the Message: ")
                  tp3(message)
            elif(Type == 4):
                  exit(0)
            else:
                  print("Sorry Wrong Input....Enter Again\n")
            
main()


"""

aiktc@aiktc-OptiPlex-3046:~/Desktop$ python3 first.py
Enter the type of Encoding
1. Type 1
2. Type 2
3. Type 3
4. Exit
Enter the Choice
1
Enter the Message: poonawala
Your Message is: poonawala

Your Encripted message is: sqdrdorzd

Enter the type of Encoding
1. Type 1
2. Type 2
3. Type 3
4. Exit
Enter the Choice
2
Enter the Message: poonawala
Your Message is: poonawala

Your Encripted message is: rqzosrddd

Enter the type of Encoding
1. Type 1
2. Type 2
3. Type 3
4. Exit
Enter the Choice
3
Enter the Message: poonawala
Enter the Key: hgtyrdfse
Your Message is: poonawala

Your Key is: hgtyrdfse

Your Encripted message is: zddrsdorq

Enter the type of Encoding
1. Type 1
2. Type 2
3. Type 3
4. Exit
Enter the Choice
4


"""