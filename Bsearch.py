# -*- coding: utf-8 -*-
"""
Created on Thu Aug  2 19:52:34 2018

@author: 403-10
"""

import random

randomList=[]
while True:
    rand=random.randint(1,100)
    randomList.append(rand)
    randomList=set(randomList)
    if len(randomList)==100:
        break
    randomList=list(randomList)
    
    
    
randomList=list(randomList)
random.shuffle(randomList)

def binarySearch(randomList):
    half=int(len(randomList)/2)
    try:
        if randomList[half] < randomList[half-1]:
            randomList=randomList[:half-1]
            return binarySearch(randomList)
        elif randomList[half] < randomList[half+1]:
            randomList=randomList[half+1:]
            return binarySearch(randomList)
        else:
            return randomList[half]
    except IndexError:
        return randomList[half]
    

print(binarySearch(randomList))