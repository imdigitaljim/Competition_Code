from math import *
from decimal import *

myinput = ""
myprimesum = 0
mymissedsum = 0
numberschecked = 0
numbersgood = 0
primelist = [True for a in range(0, 1000000)]
primelist[0] = False
primelist[1] = False

s = len(primelist)
for a in range(2, ceil(sqrt(s))):
    if primelist[a]:
        for b in range(a**2, s, a):
            primelist[b] = False

while True:
    myinput = input()
    if myinput == '0':
        break
    mychar = myinput[0:1]
    mynum = int(myinput[1:])
    if mychar == 'C':
        if (primelist[mynum]):
            myprimesum+= mynum
            numberschecked += 1
            numbersgood += 1
            print("yes")
        else:
            mymissedsum+= mynum
            numberschecked += 1
            print("no")
    elif mychar == 'P':
        n = 1
        i = 1
        index = 0
        while n < mynum:
            if primelist[i] == True:
                n += 1
                index = i
            i += 1
        myprimesum+= index
        print(index)
print(myprimesum)

//i stopped on this
print(getcontext(numberschecked*100/numbersgood).prec(2), "%")

            
