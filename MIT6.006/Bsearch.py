# -*- coding: utf-8 -*-
"""
Created on Thu Aug  2 19:52:34 2018

@author: 403-10
"""

import random

randomList=[]
while True:
    rand=random.randint(1,1000)
    randomList.append(rand)
    randomList=set(randomList)
    if len(randomList)==100:
        break
    randomList=list(randomList)
    
    
    
randomList=list(randomList)
random.shuffle(randomList)
print(randomList)

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
    
# shuffle 상황에서 best값이 나오지 않는다. WHY?

print(binarySearch(randomList))