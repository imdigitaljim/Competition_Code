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

#perms = itertools.permutations(inventory)
currentMaxValue = 0
#currentSet = list
currentcount = 0
currentweight = 0

count = 6
weight = 10
knapsack = []
for x in range(0,count):
    knapsack.append([0 for y in range(0, weight)])

for item in range(0, len(inventory)):
    for w in range(0, weight):

        if(inventory[item][2] < w):
            if(knapsack[item][w-1]
        else:
            if(knapsack[item-1][w] > knapsack[item][w-1]:
               knapsack[item][w] = knapsack[item-1][w]
            else:
                knapsack[item][w] = knapsack[item][w-1]


for a in knapsack:
    print(a)


