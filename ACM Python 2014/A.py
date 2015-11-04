from __future__ import print_function
import sys

while(True):
    try:
        n = raw_input()
        n = n.split()

        side = len(n[0])

        for i in range(0, side):
            for x in range(0, side-i-1):
                print("  ", end="")
            print(n[1], end = "")
            if(i == side-1):
                print(" "*(2*i-1-len(n[0])/2) + n[0] + " "*(2*i-1-len(n[0])/2), end="")
            else:
                print("  " * ((2*i)-1), end = " ")
                
            if( i >= 1):
                print(n[1])
            else:
                print()
            
        for i in range(side - 2,-1, -1):
            for x in range(0, side-i-1):
                print("  ", end="")
            print(n[1]+" ", end = "")
            print("  " * (2*i-1), end = "")
            if i >= 1:
                print(n[1])

        print()
    except:
        break
