#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Aim: Implementation and analysis of RSA cryptosystem and digital signature scheme using RSA/EI Gamal
@author: manzars
Roll no: 16CO50
"""
import numpy as np

def gcd(num1, num2):
    while(num1 != num2):
        if(num1 < num2):
            num2 = num2 - num1
        else:
            num1 = num1 - num2
    return num1

p = 3
q = 7
phy = (p-1) * (q-1)
n = p * q
m = 11

def calculate_e(phy):
    flag = True
    while(flag):
        e = int(np.random.uniform(2, phy))
        if(gcd(phy, e) == 1):
            return e
        else:
            e = int(np.random.uniform(2, phy))
e = calculate_e(phy)

def calculate_d(e, phy):
    flag = True
    while(flag):
        d = int(np.random.uniform(2, phy))
        if(((e * d) % phy) == 1):
            return d
        else:
            d = int(np.random.uniform(2, phy))
d = calculate_d(e, phy)

ct= (m ** e) % n
dec = (ct ** d) % n

print("public key = (%r, %r)\nprivate key = (%r, %r)\nplain text = %r\ncipher text = %r\ndecrypted text = %r" %(e, n,d, n, m, ct, dec))

"""
Output:

public key = (11, 21)
private key = (11, 21)
plain text = 11
cipher text = 2
decrypted text = 11

"""