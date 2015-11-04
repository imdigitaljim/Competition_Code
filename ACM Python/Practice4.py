banks = dict()
while True:
    entry = input()
    if entry == "X":
        break
    entry = entry.split()
    if entry[0] in banks.keys():
        if float(entry[1]) > 0:
            banks[entry[0]] = (banks[entry[0]] + float(entry[1]))
    else:
        if float(entry[1]) > 0:
        banks[entry[0]] = float(entry[1])
print(banks)
