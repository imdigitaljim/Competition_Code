def myprint(num):
    if num%5 == 0 and num%3 == 0:
        print (num, "FsuNoles")
    elif num%3 == 0:
        print (num, "noles")
    elif num%5 == 0:
        print (num, "fsu")
    else:
        print (num)
    return

mynum = 0
for a in range(0,101):
    myprint(a)
while (mynum != -1):
    mynum = int(input())
    myprint(mynum)



