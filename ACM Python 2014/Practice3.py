inputstring = input()
wordlist = [a[0].upper() + a[1:] for a in inputstring.split()]
for a in range(0, len(wordlist)):
    wordlist[a] = wordlist[a][::-1]
    wordlist[a] = wordlist[a][0].upper() + wordlist[a][1:]
wordlist = " ".join(wordlist)
print(wordlist)