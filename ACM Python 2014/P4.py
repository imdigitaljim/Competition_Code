C = 100
L = 50
X = 10
V = 5
I = 1
numerals = [('C',100), ('L',50),('X',10),('V',5),('I',1)]
numerals = dict(numerals)

codes = raw_input()
codes = codes.split()

for code in codes:
    s = 0
    for i in range(0, len(code)):
        value = numerals[code[i]]
        if i+1 < len(code) and numerals[code[i+1]] > value:
            s -= value
        else:
            s += value
    print(code +" is translated to " + str(s))
    

