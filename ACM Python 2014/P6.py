from __future__ import print_function
import math
import itertools

n = raw_input()
n = n.split()

count = int(n[0])
weight = int(n[1])

inventory = list()
for i in range(0, count):
    a = raw_input()
    a = a.split()
    a[2] = int(a[2])
    a[1] = int(a[1])
    inventory.append(a)

perms = itertools.permutations(inventory)
currentMaxValue = 0
currentSet = list
currentcount = 0
currentweight = 0
for x in perms:
    tempVal = 0
    tempWeight = 0
    tempitems = 0
    tempCount = 0
    for item in x:
        if( tempWeight + item[2] <= weight):
            tempWeight += item[2]
            tempVal += item[1]
            tempCount+=1
        else:
            break
    if tempVal > currentMaxValue:
        currentMaxValue = tempVal
        currentSet = x
        currentcount = tempCount
        currentweight = tempWeight


print(currentMaxValue)
tempC = 0
for x in inventory:
    if(tempC > currentcount):
        break
    if x in currentSet:
        print(x[0])
    tempC +=1
    if(tempC > currentcount):
        break
    
print(currentweight)
    
