#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Mon Feb 18 00:56:31 2019

@author: manzars
"""

def gcd(num1, num2):
    while(num1 != num2):
        if(num1 < num2):
            num2 = num2 - num1
        else:
            num1 = num1 - num2
    return num1

p = 5
q = 7
phy = (p-1) * (q-1)
n = p * q

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
